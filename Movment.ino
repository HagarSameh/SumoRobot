inline void Back(int s) {
  analogWrite(LeftBackpinE,  s); 
  analogWrite(LeftFrontpinE, s); 
  analogWrite(RightBackpinE, s); 
  analogWrite(RightFrontpinE, s); 
  
  digitalWrite(LeftBackpin1, LOW);
  digitalWrite(LeftBackpin2, HIGH);

  digitalWrite(LeftFrontpin1, LOW);
  digitalWrite(LeftFrontpin2, HIGH);

  digitalWrite(RightBackpin1, LOW);
  digitalWrite(RightBackpin2, HIGH);

  digitalWrite(RightFrontpin1, LOW);
  digitalWrite(RightFrontpin2, HIGH);

}
inline void Left(int s){
  analogWrite(LeftBackpinE, s); //ENA pin
  analogWrite(LeftFrontpinE, s); //ENB pin
  analogWrite(RightBackpinE, s); //ENA pin
  analogWrite(RightFrontpinE, s); //ENB pin
  
  digitalWrite(LeftFrontpin1, LOW);
  digitalWrite(LeftFrontpin2, LOW);

  digitalWrite(RightBackpin1, HIGH);
  digitalWrite(RightBackpin2, LOW);

  digitalWrite(LeftBackpin1, LOW);
  digitalWrite(LeftBackpin2, LOW);

  digitalWrite(RightFrontpin1, HIGH);
  digitalWrite(RightFrontpin2, LOW);
}

inline void Rotate180(int s){
  analogWrite(LeftBackpinE, 0); //ENA pin
  analogWrite(LeftFrontpinE, 0); //ENB pin
  analogWrite(RightBackpinE, s); //ENA pin
  analogWrite(RightFrontpinE, s); //ENB pin
  
  digitalWrite(LeftFrontpin1, LOW);
  digitalWrite(LeftFrontpin2, LOW);

  digitalWrite(RightBackpin1, HIGH);
  digitalWrite(RightBackpin2, LOW);

  digitalWrite(LeftBackpin1, LOW);
  digitalWrite(LeftBackpin2, LOW);

  digitalWrite(RightFrontpin1, HIGH);
  digitalWrite(RightFrontpin2, LOW);
}

inline void Right(int s){
  analogWrite(LeftBackpinE, s); //ENA pin
  analogWrite(LeftFrontpinE, s); //ENB pin
  analogWrite(RightBackpinE, s); //ENA pin
  analogWrite(RightFrontpinE, s); //ENB pin
  
  digitalWrite(RightBackpin1, LOW);
  digitalWrite(RightBackpin2, LOW);

  digitalWrite(LeftFrontpin1, HIGH);
  digitalWrite(LeftFrontpin2, LOW);

  digitalWrite(RightFrontpin1, LOW);
  digitalWrite(RightFrontpin2, LOW);

  digitalWrite(LeftBackpin1, HIGH);
  digitalWrite(LeftBackpin2, LOW);
}


inline void Move(int s){
  Serial.println("Move");
  analogWrite(LeftBackpinE, s); //ENA pin
  analogWrite(LeftFrontpinE, s); //ENB pin
  analogWrite(RightBackpinE, s); //ENA pin
  analogWrite(RightFrontpinE, s); //ENB pin
  
  digitalWrite(RightBackpin1, HIGH);
  digitalWrite(RightBackpin2, LOW);

  digitalWrite(LeftFrontpin1, HIGH);
  digitalWrite(LeftFrontpin2, LOW);

  digitalWrite(RightFrontpin1, HIGH);
  digitalWrite(RightFrontpin2, LOW);

  digitalWrite(LeftBackpin1, HIGH);
  digitalWrite(LeftBackpin2, LOW);
}
inline void MoveRight(){
  analogWrite(LeftBackpinE, 255); //ENA pin
  analogWrite(LeftFrontpinE, 255); //ENB pin
  analogWrite(RightBackpinE, 150); //ENA pin
  analogWrite(RightFrontpinE, 150); //ENB pin
  
  digitalWrite(RightBackpin1, HIGH);
  digitalWrite(RightBackpin2, LOW);

  digitalWrite(LeftFrontpin1, HIGH);
  digitalWrite(LeftFrontpin2, LOW);

  digitalWrite(RightFrontpin1, HIGH);
  digitalWrite(RightFrontpin2, LOW);

  digitalWrite(LeftBackpin1, HIGH);
  digitalWrite(LeftBackpin2, LOW);
}

inline void MoveLeft(){
  analogWrite(LeftBackpinE, 150); //ENA pin
  analogWrite(LeftFrontpinE, 150); //ENB pin
  analogWrite(RightBackpinE, 255); //ENA pin
  analogWrite(RightFrontpinE, 255); //ENB pin
  
  digitalWrite(RightBackpin1, HIGH);
  digitalWrite(RightBackpin2, LOW);

  digitalWrite(LeftFrontpin1, HIGH);
  digitalWrite(LeftFrontpin2, LOW);

  digitalWrite(RightFrontpin1, HIGH);
  digitalWrite(RightFrontpin2, LOW);

  digitalWrite(LeftBackpin1, HIGH);
  digitalWrite(LeftBackpin2, LOW);
}

inline void Stop(){
  analogWrite(LeftBackpinE, 0); //ENA pin
  analogWrite(LeftFrontpinE, 0); //ENB pin
  analogWrite(RightBackpinE, 0); //ENA pin
  analogWrite(RightFrontpinE, 0); //ENB pin
  
  digitalWrite(RightBackpin1, LOW);
  digitalWrite(RightBackpin2, LOW);

  digitalWrite(LeftFrontpin1, LOW);
  digitalWrite(LeftFrontpin2, LOW);

  digitalWrite(RightFrontpin1, LOW);
  digitalWrite(RightFrontpin2, LOW);

  digitalWrite(LeftBackpin1, LOW);
  digitalWrite(LeftBackpin2, LOW);
}

inline void RightBack(){
  analogWrite(LeftBackpinE, 250); //ENA pin
  analogWrite(LeftFrontpinE, 250); //ENB pin
  analogWrite(RightBackpinE, 50); //ENA pin
  analogWrite(RightFrontpinE, 50); //ENB pin
  
  digitalWrite(RightBackpin1, LOW);
  digitalWrite(RightBackpin2, HIGH);

  digitalWrite(LeftFrontpin1, LOW);
  digitalWrite(LeftFrontpin2, HIGH);

  digitalWrite(RightFrontpin1, LOW);
  digitalWrite(RightFrontpin2, HIGH);

  digitalWrite(LeftBackpin1, LOW);
  digitalWrite(LeftBackpin2, HIGH);
}

inline void LeftBack(){
  analogWrite(LeftBackpinE, 50); //ENA pin
  analogWrite(LeftFrontpinE, 50); //ENB pin
  analogWrite(RightBackpinE, 250); //ENA pin
  analogWrite(RightFrontpinE, 250); //ENB pin
  
  digitalWrite(LeftFrontpin1, LOW);
  digitalWrite(LeftFrontpin2, HIGH);

  digitalWrite(RightBackpin1, LOW);
  digitalWrite(RightBackpin2, HIGH);

  digitalWrite(LeftBackpin1, LOW);
  digitalWrite(LeftBackpin2, HIGH);

  digitalWrite(RightFrontpin1, LOW);
  digitalWrite(RightFrontpin2, HIGH);
}

inline void Circular(){
  analogWrite(LeftBackpinE, 50); //ENA pin
  analogWrite(LeftFrontpinE, 50); //ENB pin
  analogWrite(RightBackpinE, 250); //ENA pin
  analogWrite(RightFrontpinE, 250); //ENB pin
  
  digitalWrite(LeftFrontpin1, HIGH);
  digitalWrite(LeftFrontpin2, LOW);

  digitalWrite(RightBackpin1, HIGH);
  digitalWrite(RightBackpin2, LOW);

  digitalWrite(LeftBackpin1, HIGH);
  digitalWrite(LeftBackpin2, LOW);

  digitalWrite(RightFrontpin1, HIGH);
  digitalWrite(RightFrontpin2, LOW);
}
