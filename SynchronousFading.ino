//LEDs are connected like this: white, red, green, blue
//The LEDs all slowly light up, then slowly fade off

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
 for (i=0; i<=255; i++){
  analogWrite(white, i);
  analogWrite(red, i);
  analogWrite(green, i);
  analogWrite(blue, i);
  delay(5);
 }
 delay(500);
 for (i=255; i>=0; i--){
  analogWrite(white, i);
  analogWrite(red, i);
  analogWrite(green, i);
  analogWrite(blue, i);
  delay(5);
 }
 delay(500);

}
