//author: Abigail Vikstrom
//date: July 2025
//purpose: this code is the second step to the project. It monitors temperature and humidity with a DHT11 sensor. It outputs data readings onto a liquid crystal display.
//an external relay is switched on to deliver power to a humidifying unit whenever the humidity drops below 70% to humidify an enclosed chamber.


#include <SimpleDHT.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// for DHT11, 
//      VCC: 5V or 3V
//      GND: GND
//      DATA: 2
int pinDHT11 = 2;
int pinRelay = 3;
int sensorPin = A0;
SimpleDHT11 dht11(pinDHT11);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(115200);
  pinMode(pinRelay, OUTPUT);
  digitalWrite(pinRelay, LOW);
}

void loop() {
  // start working...
  Serial.println("=================================");
  Serial.println("Sample DHT11...");
  
  // read without samples.
  byte temperature = 0;
  byte humidity = 0;
  int err = SimpleDHTErrSuccess;
  if ((err = dht11.read(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err="); Serial.println(err);delay(1000);
    return;
  }
  

    lcd.begin();

  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.print("temperature  "); lcd.print((int)temperature);
  lcd.setCursor(0, 1);
  lcd.print("humidity  ");
  lcd.print((int)humidity);
  delay(1000);
  
  unsigned int sensorValue = analogRead(sensorPin);
 
  if (humidity<=70 && sensorValue>500){
    digitalWrite(pinRelay,LOW);
    delay(1500);
    digitalWrite(pinRelay,HIGH);
    delay(15000);
  }

  else {
    digitalWrite(pinRelay,LOW);
  }

}
