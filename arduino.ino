int speed = 100 ;
void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, LOW);  
  digitalWrite(11, LOW);
  
  delay(speed); // Wait for 1000 millisecond(s)
  
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);  
  digitalWrite(10, LOW);
  
  delay(speed); // Wait for 1000 millisecond(s)       
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);  
  digitalWrite(11, LOW);
}

