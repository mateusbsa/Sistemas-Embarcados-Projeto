#ifndef read_s
#define read_s

class rd_sr
{
   public:
      rd_sr(int pin);
      float  readHumidityDHT();
      float  readTemperatureDHT();
      int readUmidadeSolo();
   private:
      int _pin;
 };

#endif
