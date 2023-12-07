#include <DHT.h>
#define DHTPIN D5
#define DHTTYPE DHT11 //Tipe DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
Serial.begin(115200);
dht.begin();
}
void loop() {
float t = dht.readTemperature();
float h = dht.readHumidity();
Serial.print("% Temperature: ");
Serial.print(t);
Serial.println("C ");
Serial.print("% Kelembaban: ");
Serial.print(h);
Serial.println("% ");
delay(500);
}
