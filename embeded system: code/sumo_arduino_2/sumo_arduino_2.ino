#include <Event.h>
#include <Timer.h>

const int enablePin = 11;
const int in1Pin = 12;
const int in2Pin = 13;
const int lightPin = 4;
const int buttonPin = 3;
int lightval;
int buttonval;
void setup()
{
 Serial.begin(9600);
 pinMode(enablePin, OUTPUT);
 pinMode(in1Pin, OUTPUT);
 pinMode(in2Pin, OUTPUT);
 pinMode(lightPin, INPUT);
 pinMode(buttonPin, INPUT);
}


void forward(){
 analogWrite(enablePin, 255); // this sets the speed for the motor at 50
 digitalWrite(in1Pin, HIGH);
 digitalWrite(in2Pin, LOW);
 
}

void backward(){
 analogWrite(enablePin, 255);
 digitalWrite(in1Pin, LOW);
 digitalWrite(in2Pin, HIGH);
 
}

void loop(){
  forward();
}

