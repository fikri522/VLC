#include <SoftwareSerial.h>
#define rx 3  
#define tx 2  

SoftwareSerial XSERIAL =  SoftwareSerial(rx, tx,false);

void setup()  
{
     XSERIAL.begin(9600);
     Serial.begin(9600);
}

void loop() 
{ 
    while (Serial.available()>0){
      char data = Serial.read();
      if (data=='a'){
      for (int i=0;i<100;i++){
        XSERIAL.print("a");
      }
      }
      else if (data=='b'){
      for (int i=0;i<1000;i++){
        XSERIAL.print("a");
      }
      }
      else 
      digitalWrite(tx, LOW);
    }

}
