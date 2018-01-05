int x;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  x=Serial.read();
 
  Serial.write('\n');
  Serial.write("hello motto");
  //delay(2000);
}
