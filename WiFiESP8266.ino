#include <ESP8266WiFi.h>
void setup() {
  WiFi.mode(WIFI_STA);
  WiFi.hostname("HOSTNAME");//your hostname
  WiFi.begin("ssid","password");//your ssid and password
  //this is no necessary>>>
  Serial.begin(115200);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("<WiFi connected>");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.print("Hostname: ");
  Serial.println(WiFi.hostname().c_str());
  //this is no necessary<<<
}
void loop() {
 }
