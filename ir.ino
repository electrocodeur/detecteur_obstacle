int ir = 6;
void setup() {
  // put your setup code here, to run once:
  pinMode(ir, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(ir) == HIGH) {
    Serial.println("oui");
    delay(100);
  }
  if (digitalRead(ir) == LOW) {
    Serial.println("non");
    delay(100);
  }
}
