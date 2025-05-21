#define BLYNK_TEMPLATE_ID "TMPL6oB4rRKkg"
#define BLYNK_TEMPLATE_NAME "Deneme"
#define BLYNK_AUTH_TOKEN "XCqZdm9Y0Y6iUtQQyI-7P2023pWN-O2-"

#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

char ssid[] = "*****";      // Wi-Fi adınız
char pass[] = "*****"; // Wi-Fi şifreniz

Servo servo1; // D1'deki servo motor
Servo servo2; // D2'deki servo motor
Servo servo3; // D3'teki servo motor
Servo servo4; // D4'teki servo motor

// Servo motor pinleri
const int servoPin1 = 14; // D5 = GPIO14
const int servoPin2 = 4; // D2 = GPIO4
const int servoPin3 = 0; // D3 = GPIO0
const int servoPin4 = 2; // D4 = GPIO2

void setup() {
  Serial.begin(115200);

  // Blynk bağlantısını başlat
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  // Servo motorları bağlama
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);

  Serial.println("Blynk bağlantısı ve servo kontrolü hazır.");
}

// D2 için Slider (Gripper asansör) - Ters Hareket
BLYNK_WRITE(V1) {
  int angle = param.asInt();
  int reversedAngle = 180 - angle;  // Ters açı
  servo2.write(reversedAngle);
  Serial.println("Gripper asansör (D2) - Ters: " + String(reversedAngle) + " dereceye ayarlandı.");
}

// D3 için Slider (Gripper Kolu)
BLYNK_WRITE(V2) {
  int angle = param.asInt();
  servo3.write(angle);
  Serial.println("Gripper Kolu (D3): " + String(angle) + " dereceye ayarlandı.");
}

// D4 için Slider (Gripper'ın Dönüşü)
BLYNK_WRITE(V3) {
  int angle = param.asInt();
  servo4.write(angle);
  Serial.println("Gripper Dönüşü (D4): " + String(angle) + " dereceye ayarlandı.");
}

// kıskaç D5
BLYNK_WRITE(V4) {
  int angle = param.asInt();
  servo1.write(angle);
  Serial.println("D5 (servo1): " + String(angle) + " dereceye ayarlandı.");
}

void loop() {
  Blynk.run();
}
