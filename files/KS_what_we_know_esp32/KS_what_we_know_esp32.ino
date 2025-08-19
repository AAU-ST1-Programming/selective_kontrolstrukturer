int LEFTBUTTON = 0;
void setup() {
  Serial.begin(115200);
  delay(400);
  // Allow reading values from a button
  pinMode(LEFTBUTTON, INPUT_PULLUP);  // PULLUP: released = 1, pressed = 0
}

void loop() {
  int left = digitalRead(LEFTBUTTON);
  printf("%d\n", left);
}
