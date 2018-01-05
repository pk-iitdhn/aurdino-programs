
int sensor=0;
int led1=13,n=0;

int temp1;
void setup()
{
  analogReference(EXTERNAL);
  pinMode(led1,OUTPUT);
  digitalWrite(led1,HIGH);
  Serial.begin(9600);
}

void loop()
{
  temp1=analogRead(sensor);
  Serial.write(temp1);
  Serial.write('\n');
  if (n-temp1 >=5)
  {
    digitalWrite(led1,LOW);
   delay(10000);
  }
     n = temp1;
}

