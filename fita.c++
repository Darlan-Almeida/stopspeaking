#include <Adafruit_NeoPixel.h>
#define pinMatrizLed 6
#define quantidadeLed 20

int sensor = A0;
float v;

Adafruit_NeoPixel fita = Adafruit_NeoPixel(quantidadeLed , pinMatrizLed , NEO_GRB + NEO_KHZ800);


void setup(){
  Serial.begin(9600);
  fita.begin();
  fita.show();

}

void loop()
{
 
  v = analogRead(sensor);
  Serial.println(v);

 if(v > 0){
  for(int i = 0 ; i < quantidadeLed; i++) {
    unsigned long cor;
    
    if (i < 5) {
      cor = fita.Color(0 , 255 , 0);
    } else if (i<10) {
      cor = fita.Color(255 , 255 , 0);
    } else {
      cor = fita.Color(255 , 0 , 0);
    }
    
    if(v> 60*i){
      fita.setPixelColor(i, cor);
      fita.show();
    } else{
     unsigned long cor;
     fita.setPixelColor(i , fita.Color(0 , 0 , 0));
     fita.show();  
    }
  }
    }
 
 }

 
  

