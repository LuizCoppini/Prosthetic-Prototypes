#include <Servo.h>
 
const int servoPinA = 4;
Servo servoA; 

const int servoPinB = 5;
Servo servoB;

const int servoPinC = 6;
Servo servoC;

//Servo servoA, servoB, servoC, servoD;
 
void setup() {
  servoA.attach(servoPinA); 
  servoB.attach(servoPinB);
  servoC.attach(servoPinC);// damos um "start" nos pulsos do servomotor, associando o pino de controle com a geração de pulsos promovida pela função e método - "servo.attach()"
  
  
  servoA.write(30);        // Definimos o ângulo inicial do servo em 90 graus (posição central do servomotor)
  servoB.write(90); 
  servoC.write(90); 

  
  Serial.begin(9600);     // Iniciamos a cominicação SERIAL para poder enviar comandos do "ângulo" pelo MONITOR SERIAL da IDE Arduino
  Serial.println("1 para abrir e 2 para fechar a garra");  // Solicitamos ao usuário que insira o valor de um ângulo qualquer em graus
}
 
void loop() {
  if(Serial.available())
  {
    int garra = Serial.parseInt();

    if (garra == 1) {
      abrir();
    }
    else if (garra == 2) {
      fechar();
    }

    //testeServo(garra);
    
  }
}

void abrir() {

  
  servoA.write(30);
  servoB.write(90);
  servoC.write(90);
  
}

void fechar() {
  
  servoA.write(90);
  servoB.write(150);
  servoC.write(150);
}

void pinca() {



}

void testeServo(int graus) {

    servoA.write(graus);

    Serial.println(graus);
}
