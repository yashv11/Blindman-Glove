#define Trig 11
#define pin 10
#define motor 7
#define buzz 8


void setup()
{ 
pinMode(Trig, OUTPUT);
pinMode(pin, INPUT);
pinMode(motor, OUTPUT);
pinMode(buzz,OUTPUT);
Serial.begin(9600);
}

void loop()
{ 
long dist, timetaken;
digitalWrite(Trig, LOW); 
delayMicroseconds(20); 
digitalWrite(Trig, HIGH);
delayMicroseconds(10); 
digitalWrite(Trig, LOW);

timetaken = pulseIn(pin, HIGH);
dist = ((timetaken/2)*340)/10000;

dist=analogRead(A0);  
Serial.println(dist);


if(dist<100)
{
digitalWrite(motor,HIGH);
digitalWrite(buzz,HIGH); 
}
else if(dist>=100 && dist<=200
{
digitalWrite(motor,LOW);
digitalWrite(buzz,HIGH); 
} 
else
{
digitalWrite(motor,LOW);
digitalWrite(buzz,LOW); 
} 
delay(500);
}
