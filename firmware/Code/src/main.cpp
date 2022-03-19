#include "DHT.h"
#include "AdafruitIO_WiFi.h"
#include "ReadSensor.h"
/************************** Config. comunicacion ***********************************/

#define IO_USERNAME "mbcode"
#define IO_KEY "aio_jlZi50njmFQxlDaAFHExPLVYRxVu"

/******************************* WIFI **************************************/

#define WIFI_SSID "POWERNET_INTELBRAS"
#define WIFI_PASS "catsix623"

AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);

/************************ Example Starts Here *******************************/

#define DHTPIN D1
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE);

AdafruitIO_Feed *temperatura = io.feed("temperatura");
AdafruitIO_Feed *humedad = io.feed("humedad");

void setup() {
  
  Serial.begin(115200);
  while(! Serial);
  Serial.print("Conectando a Adafruit IO");
  io.connect();
  while(io.status() < AIO_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.println(io.statusText());
  
  dht.begin();
}

void loop() {
  delay(5000);
  io.run();


  float h = ReadSensor.readHumidity();
  float t = ReadSensor.readTemperature();
  // Serial.print("temperatura: ");
  // Serial.print(t);
  // Serial.print(" humedad: ");
  // Serial.println(h);
  temperatura->save(t);
  humedad->save(h); 
 
}
