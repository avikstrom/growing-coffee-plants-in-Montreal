//author: Abigail Vikstrom
//date: Nov 2025
//purpose: This code monitors temperature and humidity with a DHT11 sensor. It outputs data readings onto a liquid crystal display.
//an external relay is switched on to deliver power to a humidifying unit whenever the humidity drops below 55% to humidify an enclosed chamber and an additional water sensor detects
//that the humidity reservoir is not empty.


#include <SimpleDHT.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

int pinDHT11 = 2;
int pinRelay = 3;
int pinWaterSensor = 8;
int ledPin = 13;
SimpleDHT11 dht11(pinDHT11);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(115200);
  pinMode(pinRelay, OUTPUT);
  pinMode(pinWaterSensor, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT); 
  digitalWrite(pinRelay, LOW);
  lcd.begin();
  lcd.backlight();

}

void loop() {
  
  // read without samples.
  byte temperature = 0;
  byte humidity = 0;
  dht11.read(&temperature, &humidity, NULL);
  delay(2000);
  
  //optional error checking for troubleshooting
  int err = SimpleDHTErrSuccess;
  if ((err = dht11.read(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err="); Serial.println(err);delay(1000);
    return;
  }
  

  // displays temp and humidity on lcd screen
  lcd.clear();
  lcd.print("temperature  "); lcd.print((int)temperature);
  lcd.setCursor(0, 1);
  lcd.print("humidity  ");
  lcd.print((int)humidity);
  delay(1000);
  
  int sensorState = digitalRead(pinWaterSensor);
 
 //if water detected in reservoir AND humdity below the threshold then turn on
  if (humidity <= 55 && sensorState == LOW){
    digitalWrite(pinRelay,HIGH);
    //Serial.println("Water detected");
    digitalWrite(ledPin, HIGH);
    delay(1500);
  }

  else {
    digitalWrite(pinRelay,LOW);
    digitalWrite(ledPin, LOW);
    //Serial.println("Water not detected");
  }
}
