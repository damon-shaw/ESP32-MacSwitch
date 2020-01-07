#include <Arduino.h>
#include <WiFi.h>
#include <esp_now.h>
#include <esp_wifi.h>

uint8_t customMac[] = {0x60, 0xA4, 0x4C, 0x33, 0x33, 0x33};

String myBSSID;

void setup() {
	Serial.begin(115200);
	Serial.println();

	esp_base_mac_addr_set(&customMac[0]);

	WiFi.mode(WIFI_STA);
	// WiFi.disconnect();

	Serial.println( WiFi.softAPmacAddress() );

	WiFi.softAP("ESP32 Node B");

	// Serial.print("MAC address of this node is ");
	// Serial.println(WiFi.softAPmacAddress());
	// Serial.println("Press the button to send a message");

	// WiFi.disconnect();
}

void loop() {
  // put your main code here, to run repeatedly:
}