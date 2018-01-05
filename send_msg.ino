// program to send sms from a sim on gsm module//
int timeTosend=1;
int count=0;
char phone_no[]="+919455199998";
void setup()
{
Serial.begin(9600);
delay(1000);
Serial.println("AT+CMGF=1");
delay(1000);
}
void loop()
{
while(count<timeTosend)
{
delay(1500);
Serial.print("AT+CMGS=\"");
Serial.print(phone_no);
Serial.println("\"");
while(Serial.read()!='>')
{
Serial.print("test msg.......hello!!");
Serial.write(0X1A);

Serial.write(0X0D);
Serial.write(0X0A);
delay(1000);
}
count++;
}
}

