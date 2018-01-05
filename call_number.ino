char my_no[]="+918057219497";
 void setup()
 {
   Serial.begin(9600);
   Serial.print("AT");
   delay(2000);
   Serial.print("ATA");
   Serial.print(my_no);
   Serial.print(";");
   delay(20000);
   Serial.println("ATH");
   delay(2000);
 }
 void loop()
 {
 }
   
