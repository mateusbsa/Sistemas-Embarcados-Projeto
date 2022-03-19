# DESCRIÇÃO DE FIRMWARE

### FLUXOGRAMA DO FIRMWARE

* Inicialmente o ESP é conectado com a rede WIFI e conectado com o servidor do AdafruitIO. Em seguida é instânciado a biblioteca que criamos "read_sensor.h", onde ela é responsável pelas leituras dos sensores de umidade e temperatura do ar e umidade do solo.
* No setup é realizada a inicialização do WIFI e do AdafruitIO.
* No loop é realizada as leituras dos sensores de umidade e temperatura do ar e umidade do solo. Após guardar em uma variável as leituras dos sensores, é enviado para o servidor do AdafuitIO e exibido ao usuário.

![FLUXO_FIRMWARE](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/firmware/Fluxograma_Firmware.jpeg)

