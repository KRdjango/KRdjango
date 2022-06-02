

/*
 * This program is property of SME Dehradun. for any query related to this program, 
 * contact us at www.smedehradn.com
 * if your want any soluiton related for any IoT Customized Boards and Sensor, 
 * then contact to www.nuttyengineer.com 
 */
// Fill-in information from your Blynk Template here

#define BLYNK_TEMPLATE_ID "TMPLkPrZ3qmk"
#define BLYNK_DEVICE_NAME "SERVO ANTENNA"
#define BLYNK_AUTH_TOKEN "rwveVDIscF2VBObDZfxB1ttmlkWYZjJx"

#define BLYNK_PRINT Serial
#include <Blynk.h>
#include <BlynkSimpleEsp8266.h>
#include<ESP8266WiFi.h>
#include<Servo.h>
Servo servo;
Servo myservo;
int pos=0;


char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "vivo";  // type your wifi name
char pass[] =  "1234567890";  // type your wifi password


BLYNK_WRITE(V0)
{
  int s0 = param.asInt(); 
  servo.write(s0);
  Blynk.virtualWrite(V1, s0);
}
BLYNK_WRITE(V2)
{
  int s1 = param.asInt(); 
  myservo.write(s1);
  Blynk.virtualWrite(V3, s1);
}

void setup()
{
  Serial.begin(115200);
  servo.attach(D0);
  myservo.attach(D1);
  Blynk.begin(auth, ssid, pass);
  delay(2000); 
  delay(2000); 
}

void loop() 
{
  Blynk.run();
}
