int sensor1=0;
int sensor2=0;
int sensor3=0;
int sensor4=0;

int led1=13,led2=1,led3=2,led4=3;

int temp1,temp2,temp3,temp4;

void setup()
{

  pinMode(led1,OUTPUT);
  digitalWrite(led1,HIGH);
  pinMode(led2,OUTPUT);
  digitalWrite(led2,HIGH);
  pinMode(led3,OUTPUT);
  digitalWrite(led3,HIGH);
  pinMode(led4,OUTPUT);
  digitalWrite(led4,HIGH);
  Serial.begin(9600);
}
void loop()
{
  temp1=analogRead(sensor1);
  Serial.write(temp1);
  temp2=analogRead(sensor2);
  Serial.write(temp2);
  temp3=analogRead(sensor3);
  Serial.write(temp3);
  temp4=analogRead(sensor4);
  Serial.write(temp4);
  if((temp1+temp2)>(temp3+temp4))
  {
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  else if((temp1+temp2)<(temp3+temp4))
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
  }
  else if((temp1+temp2)==(temp3+temp4))
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  else
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
  }
}   
