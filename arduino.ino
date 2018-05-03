int button;

void setup() {
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);
}

void loop() {
  button = digitalRead(8);
  Serial.println(button);
  if (button == 1) {
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }
}

