#include <math.h>


  int speedf=0; 
  int speedl=0;
  int speedr=0; 
  int en=21; 
  int angle=0,pre1=0,cur=0,err=0;
  int basel=120;
  int baser=120,basef=10,base=100;
  float kp=1,kd=0.4;
  int x=0, y=1;
  int vx, vy;
  float sqr;

  
void setup() {
Serial3.begin(9600); 
Serial1.begin(9600); 
Serial2.begin(9600); 
//Serial.begin(9600);
pinMode(7, OUTPUT);
delay(100); 
}

void loop() {

  digitalWrite(en,HIGH);
   while(!Serial3.available()){}
   digitalWrite(en,LOW);

   

if(digitalRead(20)){ 
    while(!Serial3.available()){}
    angle=Serial3.read();
    angle=-angle; 
    //Serial.println(-angle);
    }
else
    {
      while(!Serial3.available()){}
      angle=Serial3.read();
    }
    //Serial.println(angle);   
    cur=angle;
    err=cur-pre1;
        /*vx=base*x;
        vy=base*y;
       
      sqr=(sqrt(3)/2);
      speedf=vx+kp*angle+kd*err;
      speedl=(vx*0.5)-(vy*sqr)-kp*angle-kd*err;
      speedr=(vx*0.5)+(vy*sqr)-kp*angle-kd*err;*/


    
   speedl=basel-kp*angle-kd*err;
   speedf=basef+kp*angle+kd*err;
   speedr=baser+kp*angle-kd*err;

   /*if(speedf>200)
   {speedf=200;}
    if(speedf<40)
   {speedf=40;}*/
   speedf=0;
   /*if(speedf<=0)
   {speedf=0;}
   if(speedf>200)
   {speedf=200;}
    if(speedf<40 && speedf>0)
   {speedf=40;} */ 
   if(speedl>200)
   {speedl=200;}
    if(speedl<30)
   {speedl=30;}
   if(speedr>200)
   {speedr=200;}
    if(speedr<30)
   {speedr=30;}
/*if(speedf>90 ||speedl>90||speedr>90)
{speedf=90;speedl=90;speedr=90;}
  if()
  {*/
  /*while(!digitalRead(7))
    {Serial3.write(speedf);
    Serial2.write(speedl);
    Serial1.write(speedr);}*/
    Serial2.write(speedf);
    Serial3.write(speedl);    
    Serial1.write(speedr);
  /*}
  else
  {
    digitalWrite(7, HIGH);
    Serial3.write(speedf);
  
  }

/*if(angle<0)
{
  /*Serial3.write(1);
  Serial2.write(1);
  Serial1.write(1);
  delay(5);
  Serial3.write((-speedf));
  Serial2.write((-speedf));
  Serial1.write((-speedf));
}
else
{
  /*Serial3.write(0);
  Serial2.write(0);
  Serial1.write(0);
  delay(5);
  Serial3.write(speedf);
  Serial2.write(speedf);
  Serial1.write(speedf);
}*/


  /*int a=speedf >> 8;
  int b=speedf;
  int m=speedr >> 8;
  int n=speedr;
  int x=speedl >> 8;
  int y=speedl;*/
  //Serial.println(a);
  //Serial.println(b);0
  //while(!digitalRead(11)){}
  /*if(speedf<0)
  { 
    //bitSet(a, 7);
    //Serial2.write(0);
    Serial3.write(1);
    //Serial1.write(0);
    delay(5);
    //Serial2.write(speedl);
    Serial3.write(speedf);
    delay(100);
    //Serial1.write(speedr);
  }
  else
  {
    //Serial2.write(0);
    Serial3.write(0);
    //Serial1.write(0);
    delay(5);
    //Serial2.write(speedl);
    Serial3.write(speedf);
    delay(100);
    //Serial1.write(speedr);
  }*/
}
