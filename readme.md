# CONNECT ESP8266 TO WIFI NETWORK.

Only this is necessary:

```cpp
#include <ESP8266WiFi.h>
void setup() {
  WiFi.mode(WIFI_STA);
  WiFi.hostname("HOSTNAME");//your hostname
  WiFi.begin("ssid","password");//your ssid and password
}
void loop() {
 }
```


