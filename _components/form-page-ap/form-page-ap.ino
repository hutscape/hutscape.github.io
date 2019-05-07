#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

char ssid [50] = "secret";
char password [50] = "secret";
String AP_NamePrefix = "Cactus ";
const char WiFiAPPSK[] = "hutscape";
const char* DomainName = "cactus"; // set domain name domain.local

ESP8266WebServer server(80);

void setup() {
  Serial.begin(115200);
  Serial.println("");

  Serial.println("[INFO] Starting Access point");
  initAccessPoint();

  bool hasMDNSStarted = MDNS.begin(DomainName, WiFi.softAPIP());
  if (!hasMDNSStarted) {
    Serial.println("[ERROR] mDNS has failed to start");
  }

  startServer();
  Serial.println("[INFO] Connect to SSID 'Cactus NNNN'");
  Serial.println("[INFO] Go to http://cactus.local");
}

void loop() {
  MDNS.update();
  server.handleClient();
}

void initAccessPoint() {
  WiFi.mode(WIFI_AP);
  WiFi.softAP(createAPName().c_str(), WiFiAPPSK);
}

String createAPName() {
  uint8_t mac[WL_MAC_ADDR_LENGTH];
  WiFi.softAPmacAddress(mac);
  String macID = String(mac[WL_MAC_ADDR_LENGTH - 2], HEX) +
                 String(mac[WL_MAC_ADDR_LENGTH - 1], HEX);
  macID.toUpperCase();
  return AP_NamePrefix + macID;
}

void startServer() {
  server.on("/", handleRoot);

  const char * headerkeys[] = {"User-Agent","Cookie"} ;
  size_t headerkeyssize = sizeof(headerkeys)/sizeof(char*);

  server.collectHeaders(headerkeys, headerkeyssize );
  server.begin();
}

void handleRoot() {
  if (server.hasArg("ssid") && server.hasArg("password") && server.hasArg("key")){
    String receivedSSID = server.arg("ssid");

    Serial.println("[INFO] WiFi SSID received: " + receivedSSID);
    receivedSSID.toCharArray(ssid, 50);

    Serial.println("[INFO] WiFi password received");
    server.arg("password").toCharArray(password, 50);

    Serial.println("[INFO] IFTTT key received!");
    returnSuccessPage();
    return;
  }

  returnConfigPage();
}

void returnConfigPage() {
  String content = "<html><body><form action='/' method='post'>";

  content += "<h1>Secret page</h1>";
  content += "<p>WiFi SSID: <input type='text' name='ssid' placeholder='ssid'></p>";
  content += "<p>WiFi Password:<input type='password' name='password' placeholder='secret'></p>";

  content += "<p>IFTTT Key:<input type='text' name='key' placeholder='IFTTT Key'></p>";
  // IFTTT key from https://ifttt.com/services/maker_webhooks/settings
  // https://maker.ifttt.com/use/{key}

  content += "<input type='submit' name='submit' value='Submit'></form></body></html>";
  server.send(200, "text/html", content);
}

void returnSuccessPage() {
  String content = "<html><body><h1>Received!</h1></body></html>";
  server.send(301, "text/html", content);
}
