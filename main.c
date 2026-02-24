void setup()
{
  pinMode(4, OUTPUT); 
  pinMode(6, INPUT);
  digitalWrite(4, LOW);
}

void loop()
{
  bool switcher = digitalRead(6);
  if (switcher == HIGH){
    digitalWrite(4, HIGH);
  }else{
    digitalWrite(4, LOW);
  }
}
