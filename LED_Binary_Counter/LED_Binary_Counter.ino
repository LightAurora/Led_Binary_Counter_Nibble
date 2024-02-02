int blue = 2;
int green = 3;
int yellow = 4;
int red = 5;
int count = 0;

void updatePins() {
  digitalWrite(blue, bitRead(count,3));
  digitalWrite(green, bitRead(count,2));
  digitalWrite(yellow, bitRead(count,1));
  digitalWrite(red, bitRead(count,0));
}

void setup() {
  // put your setup code here, to run once:
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);

  updatePins();

}

void loop() {
  // put your main code here, to run repeatedly:
  count++;

  if (count > 15 ) {
    count = 0;
  }

  updatePins();
  delay(750);

}
