void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.write(164);
  delay(10);
}
