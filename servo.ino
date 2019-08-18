//Coding Pergerakkan satu servo 

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo servo;
Servo servo2;
Servo servo3;
Servo servo4;

char auth[] = "bRvGDtQxE_tFQxowb_-NAvnlcYNfZwi2";
char ssid[] = "lemongrasstech@unifi";
char pass[] = "lGt12345";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);


  servo1.attach(12); // NodeMCU D6 pin
  servo2.attach(13); // D7
  servo3.attach(14); // D5
  servo4.attach(15); // D8

  /*
  servo1.write(0);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  */
 }
  
void loop()
{
  
  Blynk.run();
  
}
BLYNK_WRITE(V1)
{
   servo1.write(param.asInt());
}

BLYNK_WRITE(V2)
{
   servo2.write(param.asInt());
}

BLYNK_WRITE(V3)
{
   servo3.write(param.asInt());
}

BLYNK_WRITE(V4)
{
   servo4.write(param.asInt());
}

BLYNK_WRITE(V5)
{
  servo1.write(0);
}
BLYNK_WRITE(V6)
{
  servo1.write(90);
}
