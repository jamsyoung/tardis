// to see serial output
// $ screen /tmp/cu.LightBlue-Bean 57600

int LED_PIN = 0;
int PULSE_RATE = 500;    // rate of pulse in microseconds. stay under 1000
int PULSE_LIMIT = 5;     // number of times to pulse
long PULSE_DELAY_MS = 1000L * 60 * 60;    // time to wait between pulse cycles in milliseconds (ms * s * m * h)
float PULSE_DELAY_SECONDS = PULSE_DELAY_MS / 1000;
float PULSE_DELAY_MINUTES = PULSE_DELAY_SECONDS / 60;
float PULSE_DLEAY_HOURS = PULSE_DELAY_MINUTES / 60;


void setup() {
  pinMode(LED_PIN, OUTPUT);
}


void loop() {
  float in;
  float out;
  int i;

  for (i = 0; i < PULSE_LIMIT; i++) {
    for (in = 0; in < 6.283; in = in + 0.001) {
      out = sin(in) * 127.5 + 127.5;
      analogWrite(LED_PIN, out);
      delayMicroseconds(PULSE_RATE);
    }
  }

  analogWrite(LED_PIN, LOW);

  Serial.print("battery %/V: ");
  Serial.print(Bean.getBatteryLevel());
  Serial.print("/");
  Serial.print((double) Bean.getBatteryVoltage() / 100);

  Serial.print(" | Sleeping for ");
  Serial.print(PULSE_DELAY_MS);
  Serial.print(" milliseconds / ");
  Serial.print(PULSE_DELAY_SECONDS);
  Serial.print(" seconds / ");
  Serial.print(PULSE_DELAY_MINUTES);
  Serial.println(" minutes");
  Bean.sleep(PULSE_DELAY_MS);
}
