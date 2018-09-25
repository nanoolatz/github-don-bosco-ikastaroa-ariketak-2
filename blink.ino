void setup() {
  pinMode(LED_BUILTIN, INPUT);
}

void loop() {
  digitalRead(LED_BUILTIN, LOW);
  sleep(1000);
  digitalRead(LED_BUILTIN, HIGH);
  sleep(2000);
}
