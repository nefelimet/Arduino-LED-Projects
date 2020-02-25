//This uses two RGB LEDs: one common cathode (r1, g1, b1) and one common anode (r2, g2, b2)
//A pattern of the two RGBs slowly lighting up and fading off in different combinations of colours

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
  //RGB1(CC) starts out off, and RGB2(CA) starts out with red on
  digitalWrite(r1, 0);
  digitalWrite(g1, 0);
  digitalWrite(b1, 0);
  
  digitalWrite(r2, 0);
  digitalWrite(g2, 255);
  digitalWrite(b2, 255);
  
  int i;

  //RGB1(CC) slowly turns on in blue, RGB2(CA) slowly turns off in red
  for (i=0; i<=255; i++){
    analogWrite(r1, 0);
    analogWrite(g1, 0);
    analogWrite(b1, i);
    delay(5);
    
    analogWrite(r2, i);
    analogWrite(g2, 255);
    analogWrite(b2, 255);
    delay(5);
  }
  delay(100);

  //RGB1(CC) slowly turns off in blue, RGB2(CA) slowly turns on in green
  for (i=255; i>=0; i--){
    analogWrite(r1, 0);
    analogWrite(g1, 0);
    analogWrite(b1, i);
    delay(5);
    
    analogWrite(r2, 255);
    analogWrite(g2, 255);
    analogWrite(b2, i);
    delay(5);
  }
  delay(100);

  //RGB1(CC) slowly turns on in red, RGB2(CA) slowly turns off in green
  for (i=0; i<=255; i++){
    analogWrite(r1, i);
    analogWrite(g1, 0);
    analogWrite(b1, 0);
    delay(5);
    
    analogWrite(r2, 255);
    analogWrite(g2, 255);
    analogWrite(b2, i);
    delay(5);
  }
  delay(100);

  //RGB1(CC) slowly turns off in red, RGB2(CA) slowly turns on in blue
  for (i=255; i>=0; i--){
    analogWrite(r1, i);
    analogWrite(g1, 0);
    analogWrite(b1, 0);
    delay(5);
    
    analogWrite(r2, 255);
    analogWrite(g2, i);
    analogWrite(b2, 255);
    delay(5);
  }
  delay(100);

  //RGB1(CC) slowly turns on in green, RGB2(CA) slowly turns off in blue
  for (i=0; i<=255; i++){
    analogWrite(r1, 0);
    analogWrite(g1, i);
    analogWrite(b1, 0);
    delay(5);
    
    analogWrite(r2, 255);
    analogWrite(g2, i);
    analogWrite(b2, 255);
    delay(5);
  }
  delay(100);

  //RGB1(CC) slowly turns off in green, RGB2(CA) slowly turns on in red
  for (i=255; i>=0; i--){
    analogWrite(r1, 0);
    analogWrite(g1, i);
    analogWrite(b1, 0);
    delay(5);
    
    analogWrite(r2, i);
    analogWrite(g2, 255);
    analogWrite(b2, 255);
    delay(5);
  }
  
  delay(100);

  //Back to original situation, the loop runs again
}
