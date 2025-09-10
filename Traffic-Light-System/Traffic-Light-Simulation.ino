// Traffic Light Simulation

int red = 13;
int yellow = 12;
int green = 11;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // Red Light ON
  digitalWrite(red, HIGH);
  delay(5000); // wait 5 seconds
  digitalWrite(red, LOW);

  // Green Light ON
  digitalWrite(green, HIGH);
  delay(5000); // wait 5 seconds
  digitalWrite(green, LOW);

  // Yellow Light ON
  digitalWrite(yellow, HIGH);
  delay(2000); // wait 2 seconds
  digitalWrite(yellow, LOW);
}
