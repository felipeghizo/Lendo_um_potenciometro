// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(A0));
  delay(250); // Wait for 250 millisecond(s)
}
