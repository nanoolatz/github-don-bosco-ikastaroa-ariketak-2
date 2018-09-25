void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
  digitalWrite(LED_BUILTIN, LOW);
  sleep(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  sleep(2000);
}
