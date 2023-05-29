#include <dht.h>


dht DHT;
#define DHT11_PIN 7
void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  =
  Serial.println(DHT.humidity);
  delay(1000);

  digitalWrite(3, LOW);
  int read1 = digitalRead(2);
  if (read1 == HIGH) {
    digitalWrite(3, HIGH);
    delay(1000);
  }

  digitalWrite(5, LOW);
  int read2 = digitalRead(4);
  if (read2 == HIGH) {
    digitalWrite(5, HIGH);
    delay(1000);

  } {
    delay(1000);
  }
}
