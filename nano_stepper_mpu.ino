#include <Stepper.h>

int b=0;
int en=9;
int a=0;


void setup() {
 Serial.begin(9600);
 pinMode(9, INPUT);

}

void loop() {
  Stepper s(1500, 2, 3); 
   /*digitalWrite(en,HIGH);
   while(!Serial.available()){}
   digitalWrite(en,LOW);
  /*digitalWrite(en,HIGH);
   while(!Serial.available()){}
   digitalWrite(en,LOW);
  if(digitalRead(9)){
  while(!Serial.available()){}
  b=Serial.read();
  b=-b;
  }
  else*/
  while(!Serial.available()){}
    b=Serial.read();
Serial.println(b);
    a=map(b,30,200,2,60);
    Serial.println(a);
    s.setSpeed(b);
    s.step(a);
    
 


    
    /*if(h==1){ 
    while(Serial.available()==0){}
    spd=Serial.read(); 
    //Serial.println('h');
      const int d = spd; 
      Stepper s(d, 2, 3); 
      s.setSpeed(d);
      Serial.println(d);
      Serial.println("clockwise");
      s.step(200);
    }
    else{ 
    while(Serial.available()==0){}
    spd=Serial.read();
    spd=-spd;
    const int d = spd; 
    Stepper s(d, 2, 3); 
    s.setSpeed(d);
    Serial.println(-d);
    Serial.println("clockwise");
    s.step(-200);} 

  /*Serial.println(spd);
    cur=angle;
    err=cur-pre1;
    if(x==1)
    { 
      Serial.println('k');
      bitClear(x, 7);
      steps = (a<<8) | b;
      steps=-steps;
      //Serial.println(steps); 
      /*s.setSpeed(200); 
      Serial.println("anticlockwise");
      s.step(-steps);
      const int d = steps; 
      Stepper s(d, 2, 3); 
      s.setSpeed(d);
      Serial.println(-d);
      Serial.println("clockwise");
      s.step(-200);
    }
    else
    {
      Serial.println('o');
      steps = (a<<8) | b;
      Serial.println(steps); 
      /*s.setSpeed(200);
      Serial.println("clockwise");
      s.step(steps);
      const int d = steps; 
    Stepper s(d, 2, 3); 
    s.setSpeed(100);
    Serial.println(d);
    Serial.println("clockwise");
    s.step(200);*/
  }
    
      
