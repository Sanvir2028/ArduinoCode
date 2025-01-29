int motorPlus = 5;
int motorMinus = 6;
void setup() {
  // put your setup code here, to run once:
pinMode(motorPlus,OUTPUT);
pinMode(motorMinus,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(motorPlus,HIGH);
digitalWrite(motorMinus,LOW);
delay(2000);
digitalWrite(motorPlus,LOW);
digitalWrite(motorMinus,HIGH);
delay(2000);
}