#include <Servo.h>

//Threshold for servo motor control with muscle sensor. 
//You can set a threshold according to the maximum and minimum values of the muscle sensor.
#define THRESHOLD 90

//Pin number where the sensor is connected. (Analog 0)
#define EMG_PIN 0

//Pin number where the servo motor is connected. (Digital PWM 3)
#define SERVO_PIN 3

//Define Servo motor
Servo SERVO_1;
bool state = false;
int cont = 0;

/*-------------------------------- void setup ------------------------------------------------*/

void setup(){
  
  //BAUDRATE set to 115200, remember it to set monitor serial properly. 
  //Used this Baud Rate and "NL&CR" option to visualize the values correctly.
  Serial.begin(115200);
  
  //Set servo motor to digital pin 3
  SERVO_1.attach(SERVO_PIN);
}

/*--------------------------------  void loop  ------------------------------------------------*/

void loop(){

  //The "Value" variable reads the value from the analog pin to which the sensor is connected.
  int value = analogRead(EMG_PIN);

  //If the sensor value is GREATER than the THRESHOLD, the servo motor will turn to 170 degrees.
  


  //You can use serial monitor to set THRESHOLD properly, comparing the values shown when you open and close your hand.
  Serial.println(value);
}

void controller(){

  cont = cont++;
}

void state1(){
  Serial.println("Estado 1");
}

void state2(){
  Serial.println("Estado 2");
}

void state3(){
  Serial.println("Estado 3");
}
