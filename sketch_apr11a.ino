#include <DHT.h> // ต้องนำเข้าไลบรารี DHT ก่อนใช้งาน

int RELAY1 = 11;

int RELAY2 = 12;

 

int delayValue = 1000;

 
// SET UP 
// HIGH relay 1 ,2
void setup() {

  pinMode(RELAY1, OUTPUT);

  pinMode(RELAY2, OUTPUT); 

  digitalWrite(RELAY1, HIGH);

  digitalWrite(RELAY2, HIGH);

  // PORT 9600
   Serial.begin(9600);

}

// LOOP  delay 1000
// โค้ดนี้จะสลับการเปิด-ปิดไฟของ RELAY1 และ RELAY2 ทุกๆ 1 วินาที 
void loop() {

  digitalWrite(RELAY1, LOW);

  Serial.println("RELAY1 ON");

  delay(delayValue);

 

  digitalWrite(RELAY1, HIGH);

  Serial.println("RELAY1 OFF");

 

  digitalWrite(RELAY2, LOW);

  Serial.println("RELAY2 ON");

  delay(delayValue);

  

  digitalWrite(RELAY2, HIGH);

  Serial.println("RELAY2 OFF");

}