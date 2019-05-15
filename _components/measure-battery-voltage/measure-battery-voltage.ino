#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

String AP_NamePrefix = "Cactus ";
const char WiFiAPPSK[] = "hutscape";

unsigned int raw = 0;
float volt = 0.0;

ESP8266WebServer server(80);

void setup() {
  Serial.begin(115200);
  pinMode(A0, INPUT);

  initAccessPoint();
}

void loop() {
  raw = analogRead(A0);
  volt = raw / 1023.0;
  volt *= 4.2;

  Serial.print("\n[INFO] Raw analog value is ");
  Serial.println(raw);

  Serial.print("[INFO] Current voltage is ");
  Serial.print(volt);
  Serial.println("V");

  server.handleClient();
}

void initAccessPoint() {
  Serial.println("\n[INFO] Configuring access point");
  WiFi.mode(WIFI_AP);

  String AP_NameString = getAPName();

  // convert String to char array
  char AP_NameChar[AP_NameString.length() + 1];
  memset(AP_NameChar, 0, AP_NameString.length() + 1);

  for (int i=0; i < AP_NameString.length(); i++)
    AP_NameChar[i] = AP_NameString.charAt(i);

  WiFi.softAP(AP_NameChar, WiFiAPPSK);

  startServer();
  Serial.print("[INFO] Started access point at IP ");
  Serial.println(WiFi.softAPIP());
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
  String content = "<h1>Check the current LiPo voltage!</h1>";
  content += "<p>Battery voltage: ";
  content += String(volt);
  content += "V</p>";

  server.send(200, "text/html", content);
  Serial.println("[INFO] Called /GET 200");
}
