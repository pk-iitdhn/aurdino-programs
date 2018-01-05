//program to run a motor on variable speeds by varying the delays//
//when the inout is 0 then it will stop the motor whereas the motor will be accelerated when the input is 1// 
void setup()
{
  pinMode(8,OUTPUT);
}
void loop()
{
digitalWrite(8,0);
delay(5);//make this delay 0 to stop the motor//
digitalWrite(8,1);
delay(7000000);//make this delay 0 to run the motor at its highest speed//
}
  
