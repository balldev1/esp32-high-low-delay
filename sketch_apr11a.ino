#include <DHT.h> // ต้องนำเข้าไลบรารี DHT ก่อนใช้งาน

DHT dht(9, DHT11); // สร้างอ็อบเจกต์ DHT

void setup() {
  dht.begin(); // เริ่มต้นใช้งานเซ็นเซอร์ DHT
  delay(2000);

  Serial.begin(115200);
}

void loop() {
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.println(" C"); // ขึ้นบรรทัดใหม่หลังจากการแสดงอุณหภูมิ
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %"); // ขึ้นบรรทัดใหม่หลังจากการแสดงความชื้น

  delay(10000);
}
