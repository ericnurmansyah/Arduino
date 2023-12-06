#include <HCSR04.h> //Memasukkan library HCSR04
float jarak; //Membuat variabel jarak
HCSR04 hc(D2,D3); //Mendefinisikan pin D5 sebagai Trig dan D6 sebagai Echo

void setup(){
Serial.begin(9600);
}

void loop(){
jarak = hc.dist(); //Memasukkan pembacaan sensor ke variabel jarak
Serial.print("Jarak(cm): ");
Serial.println(jarak);
delay(100);
}
