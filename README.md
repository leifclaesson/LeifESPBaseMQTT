# LeifESPBaseMQTT

Helper functions to initialize LeifSimpleMQTT together with LeifESPBase to form a very fast booting and connecting mqtt-capable ESP8266 or ESP32-based device

It is designed for use _by programmers_.

For example, SSID, Key, host name, MQTT credentials are hardcoded and not settable from any user interface.
These and other things were *conscious design decisions* that reduce code complexity and resource requirements.

It's designed to help in the construction of _purpose-built specialty devices_. It is _not_ designed to build user-configurable devices.

Enter your WiFi SSID/key to `LeifESPBase\environment_setup.h`
Enter your MQTT credentials to `LeifESPBaseHomie\environment_setup.h`

This is designed for speed, for example inside a light bulb which is normally physically powered off.
The Homie convention, while wonderful, is too heavy for this purpose as the huge number of required topics adds noticeably to the handshaking time.
Imagine how poorly things would work if you had 50 lightbulbs (not unreasonable if they're downlights in a large living room) all trying to publish their Homie topics at the same time...

For more information see [LeifSimpleMQTT](https://github.com/leifclaesson/LeifSimpleMQTT)


## dependencies

[LeifESPBase](https://github.com/leifclaesson/LeifESPBase)
[LeifSimpleMQTT](https://github.com/leifclaesson/LeifSimpleMQTT)
[AsyncMqttClient](https://github.com/marvinroger/async-mqtt-client)
[ESPAsyncTCP](https://github.com/me-no-dev/ESPAsyncTCP)

## dependencies (ESP32)

ArduinoOTA
ESP32
ESPmDNS
FS
Update
WebServer
WiFi

## dependencies (ESP8266)

ArduinoOTA
ESP8266mDNS
ESP8266-ping
ESP8266WebServer
ESP8266WiFi
ESPAsyncTCP

