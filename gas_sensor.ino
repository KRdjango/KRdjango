#include <Blynk.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
BlynkTimer timer;
char auth[] = ""; //Enter the Auth code which was send by Blink
char ssid[] = "ECE IOT";  //Enter your WIFI Name
char pass[] = "$eceeceiot@2k22";  //Enter your WIFI Password

void Ronaldo() {
  int r = analogRead(A0);
  bool l = digitalRead(D4);

  r = map(r, 0, 1023, 100, 0);
  if (isnan(r))
  {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Blynk.virtualWrite(V2, r);  //V2 is for Rainfall
  void setup() 
  {
  Serial.begin(9600); 
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(10L, Ronaldo);
  }

  void loop() 
  {
  Blynk.run(); 
  timer.run(); 
  }
