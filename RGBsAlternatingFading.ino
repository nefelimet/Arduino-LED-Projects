//This uses two RGB LEDs: one common cathode (r1, g1, b1) and one common anode (r2, g2, b2)
//While CC LED turns red, CA LED fades off (in red) and vice versa

//Common Cathode RGB LED
#define r1 9
#define g1 10
#define b1 11

//Common Anode RGB LED
#define r2 6
#define g2 5
#define b2 3

void setup() {
  pinMode(r1, OUTPUT);
  pinMode(g1, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(b2, OUTPUT);
}

void loop() {
  //In the start Common Cathode RGB is turned off
  digitalWrite(r1, 0);
  digitalWrite(g1, 0);
  digitalWrite(b1, 0);
  //In the start Common Anode is lit up (white)
  digitalWrite(r2, 0);
  digitalWrite(g2, 0);
  digitalWrite(b2, 0);
  
  int i;
  for (i=0; i<=255; i++){
    //Common Cathode LED slowly turns red
    analogWrite(r1, i);
    analogWrite(g1, 0);
    analogWrite(b1, 0);

    //Common Anode LED was red and slowly turns off
    analogWrite(r2, i);
    analogWrite(g2, 255);
    analogWrite(b2, 255);
    delay(5);
  }
  delay(100);
  
  for (i=255; i>=0; i--){
    //Common Cathode LED was red and slowly turns off
    analogWrite(r1, i);
    analogWrite(g1, 0);
    analogWrite(b1, 0);

    //Common Anode LED slowly turns red
    analogWrite(r2, i);
    analogWrite(g2, 255);
    analogWrite(b2, 255);
    delay(5);
  }
  delay(100);
}
