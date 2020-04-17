void setup() 
{
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
}

void loop() 
{
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
delay(20);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(9,LOW);
delay(20);
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
delay(20);
digitalWrite(12,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
delay(20);

}
