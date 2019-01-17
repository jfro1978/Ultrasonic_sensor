//Arduino code for control of the HC SR04 ultrasonic sensor

int trig = 7;
int echo = 8;
unsigned long pulse_duration = 0;
unsigned long distance;
int loop_time = 1000;

void setup() 
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);  

  //Ensure trig pin is set to low to begin with
  digitalWrite(trig,0);
  delayMicroseconds(2);
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(trig,1);
  delayMicroseconds(10);
  digitalWrite(trig,0);
  
  pulse_duration = pulseIn(echo, HIGH); // units of seconds

  distance = (0.343*pulse_duration)/2;
  
  Serial.print("The distance is: ");
  Serial.print(distance);
  Serial.println(" mm");
  
  delay(loop_time); 
}
