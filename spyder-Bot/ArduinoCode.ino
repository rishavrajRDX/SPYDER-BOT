/*
*Author : MADHWESH ANAND
 */ 

#include<Servo.h>
Servo s1,s2,s3,s4,s5,s6,s7,s8 ;
int count ;
int i,j ;
char s ;



void setup() {
Serial.begin(9600) ;

s1.attach(2) ;
s2.attach(3) ;
s3.attach(4) ;
s4.attach(5) ;
s5.attach(9) ;
s6.attach(11) ;
s7.attach(12) ;
s8.attach(13) ;


s1.write(70) ;
s2.write(120) ;
s3.write(70) ;
s4.write(120) ;
delay(200) ;
s5.write(160) ;
s6.write(40) ;
s7.write(160) ;
s8.write(25) ;
delay(2000) ;
stand() ;

delay(200) ;
}

void loop()
{
  
  if(Serial.available()!=0)
  {
      s = Serial.read() ;
      if(s=='F'){
        gait() ;
        for(i=0; i<2; i++) {
         mov_f() ;
        }
        delay(20) ;
        
      }
      if(s=='B'){
        for(j=0; j<2; j++){
         gait() ;
         mov_b() ;
        }
        delay(20) ;
        
      }
      if(s=='L'){
        turn_left() ;
        turn_left() ;
        turn_left() ;
        delay(20) ;
        
      }
      if(s=='R'){
        turn_right() ;
        turn_right() ;
        turn_right() ;
        delay(20) ;
        
      }
      if(s=='P'){
        push_up() ;
        delay(20) ;
        
      }
      if(s=='H'){                              //hi left
        for(j=0; j<4; j++){
          h_left() ;
        }
        s1.write(70) ;
        s5.write(122) ;
        delay(20) ;
        
      }
      
      if(s=='Y'){                             //hi right 
         for(j=0; j<4; j++){
          h_right() ;
        }
        s4.write(120) ;
        s8.write(64) ;
        delay(20) ;
      }
    
  }
  Serial.println() ;

  delay(20) ;
 
}

void stand()
{
delay(500) ;
  s7.write(125) ;
  s8.write(64) ;
  s5.write(122) ;
  s6.write(75) ;
  delay(50) ;
}


void h_right() {
  s8.write(34) ;
  for(count=95; count<=155; count++){
  s4.write(count) ;
delay(10) ;
  }
  delay(300) ;
 for(count=155; count>=95; count--) {
 s4.write(count) ;
  delay(10) ; 
 }
 delay(300) ;
 
}
void h_left(){
  s5.write(152) ;
   for(count=105; count>=45; count--) {
  s1.write(count) ;
     delay(10) ;
   }
  delay(300) ;
    for(count=45; count<=105; count++){
  s1.write(count) ;
      delay(10) ;
    }
  delay(300) ;
}

void mov_f() 
{ 
  delay(50) ;
  s7.write(155) ;
  delay(50) ;
  s3.write(95) ;
  delay(50) ;
  s7.write(125) ;
  delay(80) ;
  s8.write(30) ;
  delay(50) ;
  s4.write(145) ;
  delay(50) ;
  s8.write(64) ;
  delay(80) ;
  s2.write(145) ;
  delay(50) ;
  s4.write(120) ;
  delay(50) ;
  s3.write(70) ;
  delay(50) ;
  s1.write(95) ;

  delay(80) ;

  s6.write(45) ;
  delay(50) ;
  s2.write(95) ;
  delay(50) ;
  s6.write(75) ;
  delay(50) ;
  s5.write(155) ;
  delay(50) ;
  s1.write(45) ; 
  delay(50) ;
  s5.write(125) ;
  delay(80) ;
  s3.write(45) ;
  delay(50) ;
  s1.write(70) ;
  delay(50) ;
  s4.write(95) ;
  delay(50) ;
  s2.write(120) ;

  delay(80) ;
  }

void gait(){
  s8.write(30) ;
  delay(50) ;
  s4.write(95) ;
  delay(50) ;
  s8.write(64) ;
  delay(50) ;
}
void mov_b() {
  s7.write(161) ;
  delay(50) ;
  s3.write(45) ;
  delay(50) ;
  s7.write(125) ;
  delay(80) ;
  s1.write(45) ;
  delay(50) ;
  s2.write(95) ;
  delay(50) ;
  s4.write(120) ;
  
  delay(80) ;
  
  s5.write(143) ;
  delay(50) ;
  s1.write(95) ;
  delay(50) ;
  s5.write(113) ;
  delay(80) ;
  s6.write(45) ;
  delay(50) ;
  s2.write(145) ;
  delay(50) ;
  s6.write(78) ;
  delay(80) ;
  s4.write(145) ;
  delay(50) ;
  s3.write(95) ;
  delay(50) ;
   s1.write(70) ;
  delay(50) ;
   s2.write(120) ;
  delay(80) ;
  
}

void push_up() {
  s3.write(70) ;
  s4.write(120) ;
  s1.write(95) ;
  s2.write(95) ;
  s7.write(116) ;
  s8.write(70) ;
  for(int i=0; i<7; i++) {
    for(j=0; j<=55; j++){
    s6.write(95-j) ;
    delay(5) ;
    s5.write(93+j) ;
    delay(5) ;
    }

    for(j=0; j<=55; j++){
   s5.write(148-j) ;
   delay(5) ;
   s6.write(40+j) ;
   delay(5) ;
  }
  s3.write(70) ;
  s4.write(120) ;
}
}


void turn_right(){
  for(i=0; i<3; i++) {
    s5.write(155) ;
    delay(50) ;
    s1.write(40) ;
    delay(50) ;
    s5.write(125) ;
    delay(80) ;
    s7.write(155) ;
    delay(50) ;
    s3.write(40) ;
    delay(50) ;
    s7.write(125) ;
    delay(80) ;
    s6.write(50) ;
    delay(50) ;
    s2.write(90) ;
    delay(50) ;
    s6.write(75) ;
    delay(80) ;
    s8.write(39) ;
    delay(50) ;
    s4.write(90) ;
    delay(50) ;
    s8.write(64) ;
    delay(80) ;
    s1.write(70) ;
    delay(50) ;
    s4.write(120) ;
    delay(50) ;
    s3.write(70) ;
    delay(50) ;
    s2.write(120) ;
    delay(100) ;
  }
}


void turn_left() {
    for(i=0; i<3; i++) {
    s5.write(155) ;
    delay(50) ;
    s1.write(100) ;
    delay(50) ;
    s5.write(125) ;
    delay(80) ;
    s7.write(155) ;
    delay(50) ;
    s3.write(100) ;
    delay(50) ;
    s7.write(125) ;
    delay(80) ;
    s6.write(45) ;
    delay(50) ;
    s2.write(150) ;
    delay(50) ;
    s6.write(75) ;
    delay(80) ;
    s8.write(34) ;
    delay(50) ;
    s4.write(150) ;
    delay(50) ;
    s8.write(64) ;
    delay(80) ;
    s1.write(70) ;
    delay(50) ;
    s4.write(120) ;
    delay(50) ;
    s3.write(70) ;
    delay(50) ;
    s2.write(120) ;
    delay(100) ;
  }
}
