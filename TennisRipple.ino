//The LEDs are connected like this: white, red, green, blue
//The LEDs light up one after the other like a ripple
//The ripple moves from white to blue, then goes back from blue to white (like a tennis ball)

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
  digitalWrite(white, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(50);

  digitalWrite(white, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(50); 

  digitalWrite(white, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  delay(50);

  digitalWrite(white, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  delay(50);

  digitalWrite(white, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  delay(50);

  digitalWrite(white, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(50);

}
