void setup() {
 pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
   pinMode(10,OUTPUT);
   pinMode(11,OUTPUT);
    pinMode(6,INPUT);
    pinMode(7,INPUT);
    Serial.begin(9600);
}
l 4fvoid loop {
int irl=digitalRead(6);
int irl=digitalRead(7);
if(irl==LOW)
{
  digitalRead(8,HIGH);
  digitalRead(9,LOW);
  digitalRead(10,HIGH);
  digitalRead(11,LOW);
}
else if (irl==HIGH)
{
   digitalRead(8,LOW);
  digitalRead(9,LOW);
  digitalRead(10,LOW);
  digitalRead(11,LOW);
}
