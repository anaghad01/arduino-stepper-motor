int stepsf = -1600; 
  int stepsl = -1600;
  int stepsr = 1600; 
  int angle;
int pre1=0,err=0,cur;
int en=21;
float kp=0.01;

void setup() {
Serial3.begin(9600); 
Serial1.begin(9600); 
Serial2.begin(9600); 
delay(100); 
}

void loop() {

digitalWrite(en,HIGH);
   while(!Serial3.available()){}
   digitalWrite(en,LOW);

if(Serial3.read()==1){ 
    while(!Serial3.available()){}
    angle=Serial3.read(); 
    //Serial.println('h');
    }
else{ 
    while(!Serial3.available()){}
    angle=Serial3.read();
    angle=-angle;} 

  //Serial.println(angle);
    cur=angle;
    err=cur-pre1;

 stepsf= stepsf*kp;
  

  int a=stepsf >> 8;
  int b=stepsf;
  int m=stepsr >> 8;
  int n=stepsr;
  int x=stepsl >> 8;
  int y=stepsl;
  //Serial.println(a);
  //Serial.println(b);0
  if(stepsf<0)
  { 
    bitSet(a, 7);
    Serial2.write(x);
    Serial3.write(a);
    Serial1.write(m);
    delay(1);
    Serial2.write(y);
    Serial3.write(b);
    Serial1.write(n);
    delay(5000);
  }
  else
  {
    Serial2.write(x);
    Serial3.write(a);
    Serial1.write(m);
    delay(1);
    Serial2.write(y);
    Serial3.write(b);
    Serial1.write(n);
    delay(3000);
  }

}
