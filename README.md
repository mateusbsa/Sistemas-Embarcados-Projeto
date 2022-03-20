# Sistemas Embarcados - 2021.2

#### Análise da temperatura e umidade do solo/ar.

### 1 - Descrição do projeto:

##### O projeto consiste na criação de um dispositivo capaz de coletar dados referentes a temperatura e umidade do ar, como também a umidade do solo, a fim de se poder realizar análises onde o sistema tenha sido instalado.

### 2 - Objetivos

  O objetivo do projeto é coletar os dados dos sensores de temperatura e umidade do ar e umidade do solo, onde serão enviados através de conexão wireless para o Adafruit.IO, um sistema de armazenamento em nuvem, com a capcidade de exibir dados em tempo real enquanto online, realizar a leitura, o monitoramento e o controle de dados que estão sendo recebidos.
  
### 3 - Resumo das arquiteturas

   1.  Hardware

  * Protótipo Real

    ![PROTÓTIPO REAL](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/hardware/Imagens_3D/prot%C3%B3tipo_real.jpeg)
  
  * Diagrama de Blocos do Hardware
  
    ![Diagrama_Blocos](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/hardware/Diagrama_Blocos_Hardware.jpeg)
  
  * Esquema Elétrico
  
    ![Esquema](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/hardware/Imagens_3D/Esquema_Eletrico.png)


  * Layout PCB

    ![Layout](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/hardware/Imagens_3D/Layout_PCB.png)

  * PCB 3D

    ![PCB_3D](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/hardware/Imagens_3D/PCB_3D.png)


  * CASE

    ![Case](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/hardware/Imagens_3D/Case_2.png)
  
 
  2.  Firmware
  
  * O firmware é  organizado da seguinte maneira:
    - A pasta **lib** contém a nossa própria biblioteca, onde é reponsável pela leitura dos sensores.
    - Na pasta **scr** contém o código principal do projeto.
  
    ![image](https://user-images.githubusercontent.com/36906080/159146884-a02cae27-aa52-4bb1-a5f8-158774acc284.png)
  
   
  * Fluxograma do Firmware:
  
    ![FLUXO_FIRMWARE](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/firmware/Fluxograma_Firmware.jpeg)
  
  3.  Software/App 
  
  * AdafruitIO
  
    ![ADAFRUIT](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/app/AdafruitIO_App.jpeg)
  
  
  * Fluxograma do APP
  
    ![FLUXO_APP](https://github.com/mateusbsa/Sistemas-Embarcados-Projeto/blob/main/app/Fluxograma_App.jpeg)
  
  
### 4 - Resumo dos Resultados

Através desse projeto conseguimos realizar as seguintes etapas:
* HARDWARE:
   <p> :heavy_check_mark: Realização do protótipo real <p>
   <p> :heavy_check_mark: Esquema Elétrico <p>
   <p> :heavy_check_mark: PCB <p>
   :heavy_check_mark: PCB 3D <p>
   :heavy_check_mark: Case para PCB <p>
* Firmware
   <p> :heavy_check_mark: Criação de uma biblioteca própria para <p> 
* App
   <p> :heavy_check_mark: Criação da parte visual para mostrar as leituras dos sensores <p>

### 5 - Grupo

* Mateus Barbosa
* Marcelo Filho
* Moabe Barbosa Alves

### 6 - Instituição

* Instituto Federal da Paraíba - IFPB
* Campus Campina Grande

### Docente responsável
* Alexandre Sales Vasconcelos
