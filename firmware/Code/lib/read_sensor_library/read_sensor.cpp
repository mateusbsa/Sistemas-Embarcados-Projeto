#include "read_sensor.h"
#include "Arduino.h"

#include "DHT.h"
#define DHTPIN D1
#define DHTTYPE DHT11 

DHT dht(DHTPIN, DHTTYPE);

rd_sr::rd_sr(int pin){
  dht.begin();
  _pin = pin;
  }

float rd_sr::readHumidityDHT(){
  return dht.readHumidity(); 
}
   
float rd_sr::readTemperatureDHT(){
  return dht.readTemperature();
}

int rd_sr::readUmidadeSolo(){
  return analogRead(_pin);
}