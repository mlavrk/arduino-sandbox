#define LED_RED 12
#define LED_YELLOW 5
#define LED_GREEN 3

void setup() {
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_RED, OUTPUT);
}

void loop() {
  redLight();
  yellowLight();
  greenLight();
}

void redLight() {
  turnAllOff();
  digitalWrite(LED_RED, HIGH);
  delay(4000);
}

void yellowLight() {
  digitalWrite(LED_YELLOW, HIGH);
  delay(1500);
}

void greenLight() {
  turnAllOff();
  digitalWrite(LED_GREEN, HIGH);
  delay(4000);
  blink(LED_GREEN, 4000);
}

void blink(int led, int blinkDelay) {
  for (int i = 0; i < blinkDelay / 500; i++) {
    digitalWrite(led, i % 2 ? LOW : HIGH);
    delay(500);
  }
}

void turnAllOff() {
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_GREEN, LOW);
}
