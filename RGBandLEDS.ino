//LEDs are connected like this: red, green, blue, RGB (common cathode)
//every time one of the three (red, green, blue) simple LEDs is lit up, and the RGB lights up in the same colours

#define green 9
#define red 10
#define blue 6

#define r 3
#define g 5
#define b 11

void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(6, OUTPUT);
}
void loop() {
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(r, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  delay(500);

  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(r, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(b, LOW);
  delay(500);

  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, HIGH);
  delay(500);
  
}
