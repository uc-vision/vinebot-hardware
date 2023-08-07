#define INPUT_PIN 12
#define OUTPUT_PIN 5
#define ON_TIME 2 // (ms) Do not exceed 2.2ms for the Flash precharge PCB < v2.0
#define BOOT_DELAY 0 // (ms)

bool last_trig_state = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(INPUT_PIN, INPUT);
  pinMode(OUTPUT_PIN, OUTPUT);
  digitalWrite(OUTPUT_PIN, HIGH);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  delay(BOOT_DELAY);
}

void loop() {
  bool trig_state = digitalRead(INPUT_PIN);

  if (trig_state && !last_trig_state){
    digitalWrite(OUTPUT_PIN, HIGH);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(ON_TIME);
    digitalWrite(OUTPUT_PIN, LOW);
    digitalWrite(LED_BUILTIN, LOW);
  }
  last_trig_state = trig_state;
}
