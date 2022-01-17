//Importing servo library
#include <Servo.h>
//Creating servo object
Servo servo;
void setup() {
  // put your setup code here, to run once:
  //Servo is attached to digital port 3, attaching it here
  servo.attach(3);
  
  
}

//Idea of attaching and detaching servo motor to stop it found online
//Modified code to fit own needs
void loop() {
  // put your main code here, to run repeatedly:

  //Attaching it again in the loop because the servo will be detached
  //to stop it from continuing
  servo.attach(3);
  //Waiting 10 seconds for the user to scoop food before moving the spoon
  delay(10000);
  //Spinning the motor counter-clockwise to move the conveyor belt and spoon down the user's arm
  servo.writeMicroseconds(1000);
  //Spinning it for 3.25 seconds (time it takes to move from one end of slot to other end)
  delay(3250);
  //Detaching the servo to stop it from moving
  servo.detach();
  //Waiting 10 seconds for the user to eat the food on the spoon
  delay(10000);
  //Reattaching the servo
  servo.attach(3);
  delay(15);
  //Spinning the motor clockwise to move it back down the slot so they can scoop food again
  servo.writeMicroseconds(2000);
  //Spins for 3.25 seconds (time it takes to move from one end to other)
  delay(3250);
  //Detaching servo again
  servo.detach();
  //Waiting 10 seconds for user to eat
  delay(10000);
  
}
