int LED = 2;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() 
{
  int pot = analogRead(A0);
   
  Serial.println(pot);

  if(pot >= 400)
  {
    digitalWrite(LED, HIGH);
  }
  if(pot < 400)
  {
    digitalWrite(LED, LOW);
  }

}
