int x;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  x=Serial.read();
  Serial.write(x);
  delay(3000);
}
