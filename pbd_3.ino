void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);
}
void loop() {
  char data;
  data=Serial.read();
  if(data=='0')
  digitalWrite(13,HIGH);
  else if(data=='1')
  digitalWrite(13,LOW);
  
}
