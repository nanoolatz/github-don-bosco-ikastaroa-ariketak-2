void setups() {
  pinMode(LED_BUILTIN, INPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);
  sleep(1000);
  digitalRead(LED_BUILTIN, HIGH);
  sleep(2000);
}
