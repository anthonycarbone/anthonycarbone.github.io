// FINAL CODE
// Team 9 - Project ARDET - ENGG1000 T1 2019

// Authored by Anthony Carbone and Eric Lin

#include <Servo.h>
#include <Wire.h>

// Motors:
  // Left motors
    const int enA = 5;
    const int in1 = 7;
    const int in2 = 8;
  // Right motors
    const int enB = 6;
    const int in3 = 12;
    const int in4 = 13;
  const int maxspeed=255; // Multipe of maxspeed (i.e. 0.75*maxspeed)

      ////// MOTOR FUNCTIONS //////
      //
      // Individual wheel movements
      void leftForward(float Speed = maxspeed)
      {
        analogWrite(enA, Speed);
        analogWrite(enB, Speed);
        
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, LOW);
        digitalWrite(in4, LOW);
      }
      
      void leftBack(float Speed = maxspeed)
      {
        analogWrite(enA, Speed);
        analogWrite(enB, Speed);
        
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, LOW);  
      }
      
      void rightForward(float Speed = maxspeed)
      {
        analogWrite(enA, Speed);
        analogWrite(enB, Speed);
        
        digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
      }
      
      void rightBack(float Speed = maxspeed)
      {
        analogWrite(enA, Speed);
        analogWrite(enB, Speed);
        
        digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
      }
      
      //
      // Actual movements //
      
      void forward(float Speed = maxspeed)
      {
        analogWrite(enA, Speed);
        analogWrite(enB, Speed);
        
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
      }
      
      void back(float Speed = maxspeed)
      {
        analogWrite(enA, Speed);
        analogWrite(enB, Speed);
        
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
      }
      
      void rightTurn(float Speed = maxspeed)
      {
        analogWrite(enA, Speed);
        analogWrite(enB, Speed);
        
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
      }
      
      void leftTurn(float Speed = maxspeed)
      {
        analogWrite(enA, Speed);
        analogWrite(enB, Speed);
        
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
      }
      
      
      void brake()
      {
        digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, LOW);
      }

// Line trace sensors:
   const int leftLT = 4;
   const int rightLT = 3;
   int turnDirection = 99;
   
// Push buttons:
   const int frontLeftButton = A1;
   const int frontRightButton = A0;
   const int backLeftButton = A2;
   const int backRightButton = A3;

// Servos:
  Servo leftArm, rightArm, bucket;
 int pos = 40, store = 70, closed = 0, open = 180;

  
void setup() {
// Motors:
  pinMode(enA, OUTPUT); //Left motors speed control (PWM)
  pinMode(enB, OUTPUT); //Right motors speed control (PWM)
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
// Push buttons:
  pinMode(frontLeftButton, INPUT);
  pinMode(frontRightButton, INPUT);
  pinMode(backLeftButton, INPUT);
  pinMode(backRightButton, INPUT);
  
// Servos:
  leftArm.attach(11);
  rightArm.attach(10);
  bucket.attach(9);

  leftArm.write(store);
  rightArm.write(120-store);
  bucket.write(closed);

  while(digitalRead(frontLeftButton) == 0 && digitalRead(frontRightButton) == 0) {}

  if(digitalRead(frontLeftButton) == 1) turnDirection = 1;
  else if(digitalRead(frontRightButton) == 1) turnDirection = 0;

 // Bucket Drop// 
 leftArm.write(store);
 rightArm.write(120-store);
 bucket.write(closed);
 delay(2000);
 
 bucket.write(closed);
 delay(500);
 
 bucket.write(open);
 delay(500);
 bucket.write(closed);
 delay(2000);
 ////////////////
}

void loop() {
  
  // Finding trough //  
  if(turnDirection == 0) rightLineFind();
  else if(turnDirection == 1) leftLineFind();
  
  lineTrace(); // Runs iff both front buttons are not HIGH
  brake();

 /// Bucket Collect //
 bucket.write(open);
 
 for (pos = store;pos <=120; pos +=1) {
   leftArm.write(pos);
   rightArm.write(120-pos);
   delay(50);
  }
 delay(2000);
 bucket.write(closed);
 delay(1000);

 leftArm.write(store);
 rightArm.write(120-store);
 delay(1000);
/////////////////////
  

 endLineTrace();
 brake();
// END //

 for (pos = store;pos >=0; pos -=1) {
   leftArm.write(pos);
   rightArm.write(120-pos);
   delay(40);
  }
 
 pinMode(11, INPUT);
 pinMode(10, INPUT);

 bucket.write(180);

 //
delay(10000000000000);
}



////// LINE TRACE //////
void leftLineFind() {
  while (digitalRead(rightLT) == 0) leftTurn(0.7*maxspeed);
}

void rightLineFind() {
  while (digitalRead(leftLT) == 0) rightTurn(0.7*maxspeed);
}

void lineTrace() {
  while(digitalRead(frontLeftButton) == 0 || digitalRead(frontRightButton) == 0) {
    if(digitalRead(frontLeftButton) == 0 && digitalRead(frontRightButton) == 0) forward();
    else if (digitalRead(frontLeftButton) == 1 && digitalRead(frontRightButton) == 0) rightForward();
    else if (digitalRead(frontLeftButton) == 0 && digitalRead(frontRightButton) == 1) leftForward();
  }
}

 void endLineTrace() {
  while(digitalRead(backLeftButton) == 0 || digitalRead(backRightButton) == 0) {
    if(digitalRead(backLeftButton) == 0 && digitalRead(backRightButton) == 0) back();
    else if (digitalRead(backLeftButton) == 1 && digitalRead(backRightButton) == 0) leftBack();
    else if (digitalRead(backLeftButton) == 0 && digitalRead(backRightButton) == 1) rightBack();
  }
 }
