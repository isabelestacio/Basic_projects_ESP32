int g = 7;
int y = 6;
int r = 5;

void setup() {
  pinMode(g,OUTPUT);
  pinMode(y,OUTPUT);
  pinMode(r,OUTPUT);
}

void loop() {
  digitalWrite(g,HIGH);
  delay(10000);
  for (int i = 0; i < 10; i++) {
    digitalWrite(g,LOW);
    delay(200);
    digitalWrite(g,HIGH);
    delay(200);
  }
  digitalWrite(g,LOW);
  digitalWrite(y,HIGH);
  delay(5000);
  digitalWrite(y,LOW);
  digitalWrite(r,HIGH);
  delay(10000);
  for (int i = 0; i < 10; i++) {
    digitalWrite(r,LOW);
    delay(200);
    digitalWrite(r,HIGH);
    delay(200);
  }
  digitalWrite(r,LOW);
}
