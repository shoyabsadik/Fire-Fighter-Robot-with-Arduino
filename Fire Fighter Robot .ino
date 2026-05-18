///--------- Arduino Fire Figter Robot--------- ///
///--------- MSS ElectroTech ---------///
////-------Pico Robotics-----------/////

#include<Servo.h>
Servo servo;

int time_delation = 700 ; //set the time to run forward
int pos; //servo position variable

#define enA 5    // Enable pin for Motor1 (L298 Pin enA)
#define in1 10   // Control pin 1 for Motor1 (L298 Pin in1)
#define in2 9    // Control pin 2 for Motor1 (L298 Pin in2)
#define in3 8    // Control pin 1 for Motor2 (L298 Pin in3)
#define in4 7    // Control pin 2 for Motor2 (L298 Pin in4)
#define enB 6    // Enable pin for Motor2 (L298 Pin enB)
#define flame 4  // Flame Sensor pin
#define servo_pin 3 // Servo pin
#define relay 11 // Relay pin

int fire; //read flame sensor data

void setup()
{
    Serial.begin(9600); // Start serial communication at 9600 baud rate
      
    pinMode(enA, OUTPUT);   // Set motor driver enable pin A as output
    pinMode(in1, OUTPUT);   // Set motor driver control pin in1 as output
    pinMode(in2, OUTPUT);   // Set motor driver control pin in2 as output
    pinMode(in3, OUTPUT);   // Set motor driver control pin in3 as output
    pinMode(in4, OUTPUT);   // Set motor driver control pin in4 as output
    pinMode(enB, OUTPUT);   // Set motor driver enable pin B as output
    pinMode(flame, INPUT); // Set servo motor pin as output
    pinMode(relay, OUTPUT); // Relay pin OUTPUT

    // Set initial motor speed (PWM range: 0 - 255)
    analogWrite(enA, 180); // Set speed for Motor1
    analogWrite(enB, 180); // Set speed for Motor2

    servo.attach(servo_pin);


  digitalWrite(relay, HIGH); // Rellay off initially
  servo.write(90);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

}
void loop()
{
  fire = digitalRead(flame);

  if(fire == 0)
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    delay(time_delation);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    delay(500);
    digitalWrite(relay, LOW);
    delay(700);
    servo_rotation();
    servo.write(90);
    digitalWrite(relay, HIGH);
  }
  else
  {
    digitalWrite(relay, HIGH);
    servo.write(90);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
}

void servo_rotation()
{
  for(pos = 0; pos <= 180; pos += 10) 
  { 
    servo.write(pos); 
    delay(20);  
  }
  for(pos = 180; pos >= 0; pos -= 10) 
  { 
    servo.write(pos); 
    delay(20);
  }
  for(pos = 0; pos <= 180; pos += 10) 
  { 
    servo.write(pos); 
    delay(20);  
  }
  for(pos = 180; pos >= 0; pos -= 10) 
  { 
    servo.write(pos); 
    delay(20);
  }
  for(pos = 0; pos <= 180; pos += 10) 
  { 
    servo.write(pos); 
    delay(20);  
  }
  for(pos = 180; pos >= 0; pos -= 10) 
  { 
    servo.write(pos); 
    delay(20);
  }
  for(pos = 0; pos <= 180; pos += 10) 
  { 
    servo.write(pos); 
    delay(20);  
  }
  for(pos = 180; pos >= 0; pos -= 10) 
  { 
    servo.write(pos); 
    delay(20);
  }
}

