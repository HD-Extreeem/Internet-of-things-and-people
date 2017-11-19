int trig = D3;
int echo = D2;
unsigned int MAX_DIST = 580;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig,OUTPUT);
  pinMode(D1,OUTPUT);
  digitalWrite(trig,LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long t1,t2,pulse_width;
  float cm,inches;

  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  while(digitalRead(echo)==0);
  t1=micros();
  while(digitalRead(echo)==0);
  t2=micros();
  pulse_width=t2-t1;

  cm = (pulse_width/58.0);
  inches = (pulse_width/148.0);

  if(pulse_width>MAX_DIST){
    digitalWrite(D1,LOW);
  }
  else{
    digitalWrite(D1,HIGH);
    Serial.print(cm);
    Serial.print("cm \t");
    Serial.print(inches);
    Serial.print(" in");
  }
  delay(60);
}
