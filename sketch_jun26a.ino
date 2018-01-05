int x=0,y=4;
void setup()
{Serial.begin(9600);
}
void loop()
{ x= Serial.read();
Serial.write(x);
Serial.println(y);
delay(1000);
}
