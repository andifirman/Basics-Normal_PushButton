const int pushButton = 13;
const int led = 7;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(pushButton, INPUT);
}

void loop() {
  int value = digitalRead(pushButton);

  if(pushButton == HIGH){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
}
