#include <read_sensor.h>

/************************** Config. comunicacion ***********************************/

#define IO_USERNAME "mbcode"
#define IO_KEY "aio_EZbN39haHRd1aJSNfNNRd2FdnN1M"

/******************************* WIFI **************************************/

#define WIFI_SSID "POWERNET_INTELBRAS"
#define WIFI_PASS "catsix623"

#include "AdafruitIO_WiFi.h"

AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);

#define SENSORSOLO A0

AdafruitIO_Feed *temperatura = io.feed("temperatura");
AdafruitIO_Feed *umidade = io.feed("umidade");
AdafruitIO_Feed *umidadeSolo = io.feed("umidade do solo");

rd_sr rd(SENSORSOLO);

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
}

void loop() {
  delay(5000);
  io.run();
  float h = rd.readHumidityDHT();
  float t = rd.readTemperatureDHT();
  int u = ( rd.readUmidadeSolo() / 1024) * 100;
  Serial.println("Solo: ");
  Serial.println(u);
  Serial.print("temperatura: ");
  Serial.print(t);
  Serial.print(" humedad: ");
  Serial.println(h);
  temperatura->save(t);
  umidade->save(h);
  umidadeSolo->save(u);
}
