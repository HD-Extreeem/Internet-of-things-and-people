void setup() {
  // put your setup code here, to run once:
  pinMode(D1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN,HIGH);
  digitalWrite(D1,HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN,LOW);
  digitalWrite(D1,LOW);
  delay(100);
}
