//IR Reciver
#include <IRremote.h>
int RECV_PIN =20; 
IRrecv receiver(RECV_PIN); 
decode_results results;
unsigned long key_value = 0; 
boolean flag= false;

//Led
#define led_Pin 38
//iR
#define IR_Front 2  //front
#define IR_Right 18 //right
#define IR_Back 3  //back
#define IR_Left 19 //le+ft
//left
#define trigPinL  10  
#define echoPinL  17  
//front
#define trigPinF  9           
#define echoPinF  16
//right
#define trigPinR  8
#define echoPinR  15
//back
#define trigPinB  11
#define echoPinB  14
//left front
#define LeftFrontpin1  42     
#define LeftFrontpin2  44
#define LeftFrontpinE  4
//right front
#define RightFrontpin1  50     
#define RightFrontpin2  52
#define RightFrontpinE  5
//left back
#define LeftBackpin1  30     
#define LeftBackpin2  32
#define LeftBackpinE  7
//right back
#define RightBackpin1  22     
#define RightBackpin2  24
#define RightBackpinE  6

long Cduration;
int  Cdistance;

long Lduration; 
int  Ldistance; 

long Rduration; 
int  Rdistance; 

long Bduration; 
int  Bdistance; 

void setup() {
  pinMode(LeftFrontpin1, OUTPUT);
  pinMode(LeftFrontpin2, OUTPUT);
  pinMode(LeftFrontpinE, OUTPUT); 

  pinMode(RightFrontpin1, OUTPUT);
  pinMode(RightFrontpin2, OUTPUT);
  pinMode(RightFrontpinE, OUTPUT); 

  pinMode(LeftBackpin1, OUTPUT);
  pinMode(LeftBackpin2, OUTPUT);
  pinMode(LeftBackpinE, OUTPUT); 

  pinMode(RightBackpin1, OUTPUT);
  pinMode(RightBackpin2, OUTPUT);
  pinMode(RightBackpinE, OUTPUT);

   //Right
  pinMode(trigPinR, OUTPUT); 
  pinMode(echoPinR, INPUT); 
  
  //Left
  pinMode(trigPinL, OUTPUT); 
  pinMode(echoPinL, INPUT); 
  
  //Front
  pinMode(trigPinF, OUTPUT); 
  pinMode(echoPinF, INPUT); 
  
  //Back
  pinMode(trigPinB, OUTPUT); 
  pinMode(echoPinB, INPUT); 

  pinMode (IR_Front, INPUT); 
  pinMode (IR_Right, INPUT); 
  pinMode (IR_Back, INPUT); 
  pinMode (IR_Left, INPUT);

  //----
  pinMode (led_Pin, OUTPUT);
  IrReceiver.begin(RECV_PIN, ENABLE_LED_FEEDBACK);
  //---
  Serial.begin(9600);

}

void loop() {
  Read();
  //Strategy1Motors();
 
if(millis()>=5000){
     Serial.println("hi");
     //IR_Strategy1();
     IR2();
     Move(250);
     delay(200);   
  } 
  /*
//----
if(IrReceiver.decode()) {
   Serial.println(IrReceiver.decodedIRData.decodedRawData);
   if(IrReceiver.decodedIRData.decodedRawData==3910598400){
    flag=true;
   }
   if(IrReceiver.decodedIRData.decodedRawData==3860463360){
    flag=false;
   }        
   IrReceiver.resume();
}  

if(flag ==true){
  digitalWrite(led_Pin, HIGH);
  IR2();
}else{
  digitalWrite(led_Pin, LOW);
  Stop(); 
}
//----

   */           

}
