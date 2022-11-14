
/* A simple program to sequentially turn on and turn off 3 LEDs */ 

int LED1 = 5;
int LED2 = 4;
int LED3 = 3;
int LED4 = 2;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
}


void loop() {
  digitalWrite(LED1, HIGH);    // turn on LED1 
  delay(100);                  // wait for 100ms
  digitalWrite(LED2, HIGH);    // turn on LED2
  delay(100);                  // wait for 100ms      
  digitalWrite(LED3, HIGH);    // turn on LED3 
  delay(100);                // wait for 100ms
  digitalWrite(LED4, HIGH);    // turn on LED4
  delay(100);                  // wait for 100ms
  digitalWrite(LED1, LOW);     // turn off LED1
  delay(50);                  // wait for 50
  digitalWrite(LED2, LOW);     // turn off LED2
  delay(50);                  // wait for 50
  digitalWrite(LED3, LOW);     // turn off LED3
  delay(50);                  // wait for 50
  digitalWrite(LED4, LOW);     // turn off LED4
  delay(50);                  // wait for 50 before running program all over again
}
