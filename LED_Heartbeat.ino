//This uses only one LED
//The LED slowly lights up until a certain point, then abruptly turns much brighter, then slowly fades off, making it look like a heartbeat

void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  int i;
  for (i=0; i<=100; i++){
    analogWrite(9, i);
    delay(10);
  }
  analogWrite(9, 255);
  for (i=255; i>=0; i--){
    analogWrite(9, i);
    delay(10); 
  }
}
