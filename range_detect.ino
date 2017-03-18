const int trigPin = 9;
const int echoPin = 10;
const int green = 11;
const int red = 12;
const int minimum = 50;

long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(green, OUTPUT);
pinMode(red, OUTPUT);
Serial.begin(9600); 
}
void loop() {
digitalWrite(green, LOW);
digitalWrite(red, LOW);
  
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance= duration/58;

if (distance <= minimum)
{
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  delay(1000);
}
else
{
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
  delay(1000);
}
}
