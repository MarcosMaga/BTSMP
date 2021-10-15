# BTSMP
Uma biblioteca de Arduino com intuito de facilitar o uso da Ponte H BTS7960, usado para controlar motores elétricos de grande porte. Tem como objetivo deixar o código mais limpo e simples de se entender.

## Como usar?

* Baixe o repositório.
* Instale a biblioteca na sua IDE ou editor de texto.
* Use o exemplo para se orientar em casos de dúvidas.

## Objetos

A biblioteca contêm apenas um objeto.

* BTSMotor(int RPWM, int LPWM)

Ao instanciar esse objeto, deve ser setado os pinos RPWM e LPWM da ponte H que está conectado no Arduino. <br/>
Exemplo: <br/>
```
BTSMotor motor(9, 10);
motor.run(150);
```

## Funções

A biblioteca contêm apenas uma função, para controle de rotação do motor.

* `BTSMotor.run(int velocity);`

A função `run` recebe como parametro um valor inteiro que representará a velocidade do motor. a variavel `int velocity` pode variar de no máximo 255 e no mínimo -255. Velocidades negativas giram o motor para um sentido, e positivas giram para outro. Ao setar a velocidade com valor 0, o motor desligará. <br/>
Exemplo:<br/> 
`BTSMotor.run(255)` <- Girar o motor para um sentido na velocidade máxima. <br/>
`BTSMotor.run(-255)` <- Girar o motor para outro sentido na velocida máxima. <br/>
`BTSMotor.run(0)` <- Desligar motor.

### Usando mais de um motor

Para usar mais de um motor, apenas será necessario instanciar mais um objeto `BTSMotor`. <br/>
```
  BTSMotor motor1(9, 10);
  BTSMotor motor2(5, 6);
  motor1.run(200);
  motor2.run(150);
```

### Pinouts usado no exemplo

PINOUT: <br/>
RPWM - Pin 9 <br/>
LPWM - Pin 10 <br/>
R_EN - VCC <br/>
L_EN - VCC <br/>
VCC  - Pin 9 <br/>
GND  - GND <br/>

