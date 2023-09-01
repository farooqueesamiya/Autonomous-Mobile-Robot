// Define the pin numbers for various components
int ena = 5;
int in1 = 6;
int in2 = 7;
int in3 = 8;
int in4 = 9;
int enb = 10;
int encoderR = 2;
int encoderL = 3;

void setup() {
  // Initialize serial communication at a baud rate of 9600
  Serial.begin(9600);

  // Set the pinMode for all the pins
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(encoderR, INPUT);
  pinMode(encoderL, INPUT);

  // Set initial states for motor control pins (in1, in2, in3, in4)
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

// Initialize variables to keep track of encoder ticks for the right and left motors
int Rprev = 0;
int Rtick = 0;
int Lprev = 0;
int Ltick = 0;

void loop() {
  // Read the state of the right encoder
  int R = digitalRead(encoderR);

  // Check for a rising edge on the right encoder
  if (R == HIGH && Rprev == LOW) {
    Rtick++;
  }
  Rprev = R;

  // Set the speed of the motor connected to ena (right motor)
  analogWrite(ena, 255);

  // Read the right encoder again
  int Rread = digitalRead(encoderR);

  // Print the tick count for the right motor to the Serial Monitor
  Serial.println(Rtick);

  // Read the state of the left encoder
  int L = digitalRead(encoderL);

  // Check for a rising edge on the left encoder
  if (L == HIGH && Lprev == LOW) {
    Ltick++;
  }
  Lprev = L;

  // Set the speed of the motor connected to enb (left motor)
  analogWrite(enb, 255);

  // Read the left encoder again
  int Lread = digitalRead(encoderL);

  // Print the tick count for the left motor to the Serial Monitor
  Serial.println(Ltick);
}
