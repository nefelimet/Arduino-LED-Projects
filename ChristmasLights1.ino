//LEDs are connected like this: white, red, green, blue
//Just a pattern where the white and green LEDs light up while the red and blue ones are fading off and vice versa

#define white 9
#define red 10
#define green 11
#define blue 6

void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
 int i;
  
 //start: white and green are lit up, red and blue are off
 analogWrite(white, 255);
 analogWrite(green, 255);
 analogWrite(red, 0);
 analogWrite(blue, 0);
 delay(100);

 //fading of white and green, lighting up of red and blue
 for (i=255; i>=0; i--){
  analogWrite(white, i);
  analogWrite(green, i);
  analogWrite(red, 255-i);
  analogWrite(blue, 255-i);
  delay(5);
 }
 delay(100);

  // This code was used for testing
  /* analogWrite(white, 0);
     analogWrite(green, 0);
     analogWrite(red, 255);
     analogWrite(blue, 255);
     delay(100);
  */

 //lighting up of white and green, fading off of red and blue
 for (i=255; i>=0; i--){
  analogWrite(white, 255-i);
  analogWrite(green, 255-i);
  analogWrite(red, i);
  analogWrite(blue, i);
  delay(5);
 }
 delay(100);
 
}
