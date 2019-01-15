int recievedData;
void setup() {
  Serial.begin(115200);
}

void loop() {
  while (Serial.available())
  {
  recievedData = Serial.read();
  Serial.println(recievedData);
  }
}
