#include <AFMotor.h>//to use the shield

//use 1 an 2 port on shield
AF_DCMotor motor1(1); 
AF_DCMotor motor2(2); 


void setup() 
{       
  Serial.begin(9600);

  //Forward
  delay (200);
  motor1.setSpeed(255); //offset here if needed
  motor1.run(FORWARD); 
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  delay(400); //change this to make it run longer. 

  //Back
  motor1.setSpeed(255); //same
  motor1.run(BACKWARD); 
  motor2.setSpeed(255); 
  motor2.run(BACKWARD);
  delay(400); 

  //Left 
  motor1.setSpeed(255);
  motor1.run(FORWARD); 
  motor2.setSpeed(0);
  motor2.run(RELEASE);
  delay(400);

  //Right
  motor1.setSpeed(0);
  motor1.run(RELEASE); 
  motor2.setSpeed(255); 
  motor2.run(FORWARD); 
  delay(400);

  //Stop
  motor1.setSpeed(0);
  motor2.run(RELEASE); 
  motor2.setSpeed(0);
  motor2.run(RELEASE); 
  
}

void loop(){
  
}




