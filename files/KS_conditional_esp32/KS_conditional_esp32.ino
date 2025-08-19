int LEFTBUTTON = 0;
int lprev = -1;
void setup(void) {
  Serial.begin(115200);
  delay(400);
  pinMode(LEFTBUTTON, INPUT_PULLUP);  // PULLUP: released = 1, pressed = 0
}

void loop() {
  int left = digitalRead(LEFTBUTTON);
  if (left != lprev) {
    lprev = left;
    printf("%d\n", left);
  }
}
