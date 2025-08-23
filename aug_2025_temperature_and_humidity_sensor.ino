//author: Abigail Vikstrom
//date: July 2025
//purpose: this code is a first step to the project, and simply monitors temperature and humidity with a DHT11 sensor. It outputs data readings onto a liquid crystal display.


#include <SimpleDHT.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// for DHT11, 
//      VCC: 5V or 3V
//      GND: GND
//      DATA: 2
int pinDHT11 = 2;
SimpleDHT11 dht11(pinDHT11);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(115200);
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
}
