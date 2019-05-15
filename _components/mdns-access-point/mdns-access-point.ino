#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

String AP_NamePrefix = "Cactus ";
const char WiFiAPPSK[] = "hutscape";
const char* DomainName = "cactus";  // set domain name domain.local

ESP8266WebServer server(80);

void setup() {
  Serial.begin(115200);
  initAccessPoint();
}

void loop() {
  MDNS.update();
  server.handleClient();
}

void initAccessPoint() {
  Serial.println("\n[INFO] Configuring access point");
  WiFi.mode(WIFI_AP);

  WiFi.softAP(getAPName().c_str(), WiFiAPPSK);

  startMDNS();
  startServer();
  MDNS.addService("http", "tcp", 80);
  Serial.print("[INFO] Started access point at IP ");
  Serial.println(WiFi.softAPIP());
}

void startMDNS() {
  if (!MDNS.begin(DomainName, WiFi.softAPIP())) {
    Serial.println("[ERROR] MDNS responder did not setup");
    while (1) {
      delay(1000);
    }
  } else {
    Serial.println("[INFO] MDNS setup is successful!");
  }
}

String getAPName() {
  uint8_t mac[WL_MAC_ADDR_LENGTH];
  WiFi.softAPmacAddress(mac);
  String macID = String(mac[WL_MAC_ADDR_LENGTH - 2], HEX) +
                 String(mac[WL_MAC_ADDR_LENGTH - 1], HEX);
  macID.toUpperCase();
  return AP_NamePrefix + macID;
}

void startServer() {
  server.on("/", handleRoot);

  const char * headerkeys[] = {"User-Agent", "Cookie"};
  size_t headerkeyssize = sizeof(headerkeys)/sizeof(char*);

  server.collectHeaders(headerkeys, headerkeyssize);
  server.begin();
}

void handleRoot() {
  String content = "<h1>Welcome</h1>";
  server.send(200, "text/html", content);
  Serial.println("[INFO] Called /GET 200");
}
