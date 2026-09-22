
#define LEFT_PIN 0
#define RIGHT_PIN 35

int c = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LEFT_PIN, INPUT_PULLDOWN);
  pinMode(RIGHT_PIN, INPUT_PULLDOWN);
  delay(200);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // læs input fra knapper
  int left = LOW == digitalRead(LEFT_PIN);
  int right = LOW == digitalRead(RIGHT_PIN);
  c +=  right-left;
  Serial.printf("%i %i %i\n", left, right, c);

  // sleep for 0.1 s
  delay(100);
}
