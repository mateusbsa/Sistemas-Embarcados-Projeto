# Sistemas Embarcados - 2021.2

#### Análise da temperatura e umidade do solo/ar.

### 1 - Descrição do projeto:

##### O projeto consiste na criação de um dispositivo capaz de coletar dados referentes a temperatura e umidade do ar, como também a umidade do solo, a fim de se poder realizar análises onde o sistema tenha sido instalado.

### 2 - Objetivos

  O objetivo do projeto é coletar os dados dos sensores de temperatura e umidade do ar e umidade do solo, onde serão enviados através de conexão wireless para o Adafruit.IO, um sistema de armazenamento em nuvem, com a capcidade de exibir dados em tempo real enquanto online, realizar a leitura, o monitoramento e o controle de dados que estão sendo recebidos.
  
### 3 - Resumo das arquiteturas e seus fluxogramas

   1.  Hardware

   * Protótipo real 

     ![PROTÓTIPO REAL](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/hardware/Imagens_3D/prot%C3%B3tipo_real.jpeg)
     
     - **ESP8266**: micro chip WiFi com pilha TCP (Transfer Control Protocol)/IP(Internet Protocol) completa e capacidade microcontroladora produzida pela empresa chinesa Espressif Systems. O chip ESP8266 é combinado com um conector micro-USB (Universal Serial Bus) com interface USB-Serial para acoplamento a computadores, um regulador de tensão para 3.3 V e um conversor analógico-digital para compor a placa NodeMCU.
     - **DHT11**: é um sensor de temperatura e umidade que permite medir temperaturas de 0 a 50 graus Celsius e umidade na faixa de 0% a 90%, com faixa de precisão de 2 graus para temperatura e 5% para umidade. Tal sensor ainda conta com um controlador de 8 bits que converte os sinais de temperatura e umidade captados em um sinal serial que pode, por sua vez, ser enviado para um microcontrolador através de seu pino de dados.

  
   * Diagrama de Blocos do Hardware
    
     ![Diagrama_Blocos](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/hardware/Diagrama_Blocos_Hardware.jpeg)
  
 
  2.  Firmware
  
  * Fluxograma do Firmware
  
    ![FLUXO_FIRMWARE](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/firmware/Fluxograma_Firmware.jpeg)
 
  
  3.  Software/App
  
  * **ADAFRUIT.IO**: é um sistema de armazenamento em nuvem, com esse serviço é possível exibir dados em tempo real enquanto online, realizar a leitura, o monitoramento e o controle de dados que estão sendo recebidos e transmitidos, além da possibilidade de enviar esses dados para sites e redes sociais como o Twitter. A ferramenta é gratuita e está disponível para uso no site: https://io.adafruit.com/.
  
  * Fluxograma do APP
  
    ![FLUXO_APP](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/app/Fluxograma_App.jpeg)
  
  
### 4 - Resumo dos Resultados

Através desse projeto conseguimos realizar as seguintes etapas:

* HARDWARE:
  
  <p> :heavy_check_mark: Esquema Elétrico <p> 
  
    ![Esquema](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/hardware/Imagens_3D/Esquema_Eletrico.png)


  <p> :heavy_check_mark: Layout PCB

    ![Layout](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/hardware/Imagens_3D/Layout_PCB.png)

  <p> :heavy_check_mark: PCB 3D

    ![PCB_3D](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/hardware/Imagens_3D/PCB_3D.png)


  <p> :heavy_check_mark: CASE

    ![Case](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/hardware/Imagens_3D/Case_2.png)

     
     
* Firmware 
    <p> :heavy_check_mark:  Criação de uma biblioteca responsável pela leituras dos sensores:
      
    - A pasta **lib** contém a nossa própria biblioteca(read_sensor_library), onde é reponsável pela leitura dos sensores.
    - Na pasta **scr** contém o código principal do projeto.

    ![image](https://user-images.githubusercontent.com/36906080/159146884-a02cae27-aa52-4bb1-a5f8-158774acc284.png)
    
     
     
* App
   <p> :heavy_check_mark: Criação da parte visual para mostrar as leituras dos sensores (ADAFRUIT.IO)<p>
  
    ![ADAFRUIT](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/app/AdafruitIO_App.jpeg)

### 5 - Grupo

* Mateus Barbosa
* Marcelo Filho
* Moabe Barbosa Alves

### 6 - Instituição

* Instituto Federal da Paraíba - IFPB
* Campus Campina Grande

### Docente responsável
* Alexandre Sales Vasconcelos
