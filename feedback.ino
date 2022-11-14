const int ledPin = 2;

int button = 11;


void setup() {
  // put your setup code here, to run once:

pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(button) == HIGH){
  digitalWrite(ledPin, HIGH);
  delay(2000);
} else {
  digitalWrite(ledPin, LOW);
}
}
