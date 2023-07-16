inline void Read(){
  //Right Ultrasonic sensor reading
  digitalWrite(trigPinR , LOW);
  delayMicroseconds(2);
  digitalWrite(trigPinR , HIGH);
  delayMicroseconds(2);
  digitalWrite(trigPinR , LOW);
  Rduration = pulseIn(echoPinR , HIGH);
  Rdistance = Rduration * 0.034 / 2; //distance from right ultrasonic
  //Center Ultrasonic sensor reading
  digitalWrite(trigPinF, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPinF, HIGH);
  delayMicroseconds(2);
  digitalWrite(trigPinF, LOW);
  Cduration = pulseIn(echoPinF, HIGH);
  Cdistance = Cduration * 0.034 / 2;//distance from front ultrasonic
  Serial.print(Cdistance);
  //LEFT Ultrasonic sensor reading
  digitalWrite(trigPinL, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPinL, HIGH);
  delayMicroseconds(2);
  digitalWrite(trigPinL, LOW);
  Lduration = pulseIn(echoPinL, HIGH);
  Ldistance = Lduration * 0.034 / 2;//distance from left ultrasonic
  //BACK Ultrasonic sensor reading
  digitalWrite(trigPinB, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPinB, HIGH);
  delayMicroseconds(2);
  digitalWrite(trigPinB, LOW);
  Bduration = pulseIn(echoPinB, HIGH);
  Bdistance = Bduration * 0.034 / 2; //distance from back ultrasonic
  }

//motors function of strategy 1 using ultrasonics only
inline void Strategy1Motors(){
if(Ldistance <=15 ) {
  Left(200);
  delay(200);
}else if(Cdistance<=15){
  Move(200);
  delay(200);
}else if(Bdistance<=15){
  Rotate180(250);
  delay(400);
}else if(Rdistance<=15){
  Right(200);
  delay(200);
} else {
   Stop();
   delay(200);
}
}

 //motors function of strategy 2 Avoiding strategy using Ultrasonics only
inline void Strategy2Motors(){
if(Ldistance<=20){
  Right(255);
  delay(100);
  Serial.println("left");

}else if(Cdistance<=20){
  RightBack();
  delay(100);
  Serial.println("center");

}else if(Bdistance<=20){
  Move(255);
  delay(100);
  Serial.println("back");

}else if(Rdistance<=20){
  Left(255);
  delay(100);
  Serial.println("right");

}else {
   Stop();
   delay(100);
   Serial.println("stop");
}
}
 
//main IR function reading of 4 IR sensors
inline void IR_Strategy1(){
int IRBack =digitalRead(IR_Back);
int IRFront =digitalRead(IR_Front);
int IRRight =digitalRead(IR_Right);
int IRLeft =digitalRead(IR_Left);

 if(IRBack==0 &&  IRRight==0 && IRFront==0&& IRLeft==0 ) {
  Stop();
  delay(100);
  Serial.println("stop");
}else if(IRBack!=0 &&  IRRight!=0 && IRFront!=0&& IRLeft!=0 ) {
  Strategy1();
  delay(100);
  Serial.println("Strategy");
}else if(IRBack==0 && IRRight!=0 && IRFront!=0&& IRLeft!=0 ){
  Move(250);
  delay(100);
  Serial.println("Back");
}else if(IRFront==0 && IRRight!=0 && IRBack!=0&& IRLeft!=0){
  RightBack();
  delay(100);
  Serial.println("Front");
 }else if(IRRight==0 && IRFront!=0 && IRBack!=0&& IRLeft!=0){
  Left(250);
  delay(100);
  Serial.println("Left");
  }else if(IRLeft==0 && IRFront!=0 && IRBack!=0&& IRRight!=0){
  Right(250);
  delay(100); 
  Serial.println("Right");
  }
  }

inline void IR2(){
int IRBack  = digitalRead(IR_Back);
int IRFront = digitalRead(IR_Front);
int IRRight = digitalRead(IR_Right);
int IRLeft  = digitalRead(IR_Left);

 if(IRBack==0 &&  IRRight==0 && IRFront==0&& IRLeft==0 ) {
  Stop();
  delay(100);
  Serial.println("stop");

}else if(IRBack!=0 &&  IRRight!=0 && IRFront!=0&& IRLeft!=0 ) {
  StrategyAvoid();
  delay(100);
  Serial.println("Strategy");
  
}else if(IRBack==0 && IRRight!=0 && IRFront!=0&& IRLeft!=0 ){
  Move(250);
  delay(100);
  Serial.println("Back");

}else if(IRFront==0 && IRRight!=0 && IRBack!=0&& IRLeft!=0){
  RightBack();
  delay(100);
  Serial.println("Front");

 }else if(IRRight==0 && IRFront!=0 && IRBack!=0&& IRLeft!=0){
  Left(250);
  delay(100);
  Serial.println("Right");

  }else if(IRLeft==0 && IRFront!=0 && IRBack!=0&& IRRight!=0){
  Right(250);
  delay(100); 
  Serial.println("Left");

  }
}
//Strategy 1 funcction using IR ans US
inline void Strategy1(){
 int IRBack =digitalRead(IR_Back);
 int IRFront =digitalRead(IR_Front);
 int IRRight =digitalRead(IR_Right);
 int IRLeft =digitalRead(IR_Left);

if(IRBack!=0 &&  IRRight!=0 && IRFront!=0&& IRLeft!=0 && Ldistance<=15){
  Left(255);
  delay(100);
  
}else if(IRBack!=0 &&  IRRight!=0 && IRFront!=0&& IRLeft!=0  &&Cdistance<=15){
  Move(255);
  delay(100);
 
}else if(IRBack!=0 &&  IRRight!=0 && IRFront!=0&& IRLeft!=0  &&Bdistance<=15){
  Rotate180(255);
  delay(100);

}else if(IRBack!=0 &&  IRRight!=0 && IRFront!=0&& IRLeft!=0 &&Rdistance<=15){
  Right(255);
  delay(100);
 
}else{
  Circular();
  delay(100);
 }
}

 //strategy 2 function using US and IR
inline void StrategyAvoid(){
int IRBack =digitalRead(IR_Back);
int IRFront =digitalRead(IR_Front);
int IRRight =digitalRead(IR_Right);
int IRLeft =digitalRead(IR_Left);

if(IRBack!=0 &&  IRRight!=0 && IRFront!=0&& IRLeft!=0 && Ldistance<=5){
  Right(255);
  delay(100);
  
}else if(IRBack!=0 &&  IRRight!=0 && IRFront!=0&& IRLeft!=0  &&Cdistance<=5){
  Rotate180(255);
  delay(100);
 
}else if(IRBack!=0 &&  IRRight!=0 && IRFront!=0&& IRLeft!=0  &&Bdistance<=5){
  Move(255);
  delay(100);

}else if(IRBack!=0 &&  IRRight!=0 && IRFront!=0&& IRLeft!=0 &&Rdistance<=5){
  Left(255);
  delay(100);
 
} else{
  Circular();
  delay(100);
 }
}
 
