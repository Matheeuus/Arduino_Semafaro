// C++ code
//
int counter;

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(5, HIGH);
  digitalWrite(2, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  for (counter = 0; counter < 5; ++counter) {
    digitalWrite(6, HIGH);
    delay(400); // Wait for 400 millisecond(s)
    digitalWrite(6, LOW);
    delay(400); // Wait for 400 millisecond(s)
  }
  digitalWrite(4, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(500); // Wait for 500 millisecond(s)
}