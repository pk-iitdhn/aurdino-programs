int sensor[3]={0,1,2};
int led[3]={13,4,2};
int temp[3]={0,0,0};
int n[3]={0},a;

void setup()
{
  
  analogReference(EXTERNAL);
  for(int i=0;i<3;i++)
  {
  pinMode(led[i],OUTPUT);
  digitalWrite(led[i],HIGH);
  }
  Serial.begin(9600);
}

void loop()
{
  for(int i=0;i<3;i++)
  {
    temp[i]=analogRead(sensor[i]);
    Serial.println(temp[i]);
    Serial.println("\n");
    delay(2000);
    
  
  //for(int i=0;i<3;i++)
  //{
  //Serial.write('\n');
  
  if ((n[i]-temp[i])>=5)
  {
    digitalWrite(led[i],LOW);
    //delay(10000);
  }
  n[i] = temp[i];

  /*else
  {
    digitalWrite(led1,HIGH);
    delay(10000);*/
  }
}

