/*
    Autor: Marcos Magalhães
    Cidade: Mogi Mirim
    Data: 03/11/2019

    O intuito desta biblioteca é facilitar o uso da Ponte H BTS7960 e deixar o codigo mais limpo.

    PINOUT:
    RPWM - Pin 9
    LPWM - Pin 10
    R_EN - VCC
    L_EN - VCC
    VCC - VCC
    GND - GND

*/

//Incluindo a biblioteca
#include <BTSMP.h>

//Declarando o motor
BTSMotor motor (9, 10); //RPWM; LPWM;

void setup() {

}

void loop() {

  motor.run(255); //Ligar motor para direita na velocidade maxima
  delay(2500);
  motor.run(-255); //Ligar motor para esquerda na velocidade maxima
  delay(2500);
  motor.run(0); //Desligar o motor
  delay(1000);

}
