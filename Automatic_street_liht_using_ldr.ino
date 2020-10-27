int val=0;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
  
{
  
  val= analogRead(A0);
  
  if(val<10)
  {
    digitalWrite(13, HIGH);
    Serial.println("Light ON");
    Serial.println(val);
  }
  else
  {
     digitalWrite(13, LOW);
    Serial.println("Light OFF");
    Serial.println(val);
  }
}
