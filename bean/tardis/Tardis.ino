// to see serial output
// $ screen /tmp/cu.LightBlue-Bean 115200


const int LED_PIN = 0;
const int PULSE_CYCLES = 5;                                   // number of times to pulse
const int PULSE_RATE_MICROS = 500;                            // speed of the pulsing. stay under 1000
const unsigned long PULSE_SLEEP_MILLIS = 1000 * 60 * 60;               // amount of time to sleep after PULSE_CYCLES ends
const float PULSE_SLEEP_SECONDS = PULSE_SLEEP_MILLIS / 1000;
const float PULSE_SLEEP_MINUTES = PULSE_SLEEP_SECONDS / 60;
const float PULSE_SLEEP_HOURS = PULSE_SLEEP_MINUTES / 60;
const int SERIAL_BAUD = 57600;                               // 300, 600, 1200, 2400, 4800, 9600, 14400, 19200, 28800, 38400, 57600, 115200
const int PEAK_AMPLITUDE = 6.283;
const int AMPLITUDE_INCREMENT = 0.001;                        // controls the speed of the pulsing
const int DUTY_CYCLE_MAGNIFIER = 127.5;                       // the value needed to move the sin() to a 0 - 255 range




void setup() {
//    Serial.begin(SERIAL_BAUD);
    pinMode(LED_PIN, OUTPUT);
    Serial.println('Starting');
}

void loop() {
    float amplitude;
    float dutyCycle;
    int i;

    Serial.println(PULSE_CYCLES);
//    
//    for (i = 0; i < 5; i++) {
//        Serial.println('cycle');
//        for (amplitude = 0; amplitude < PEAK_AMPLITUDE; amplitude += AMPLITUDE_INCREMENT) {
//            dutyCycle = sin(amplitude) * DUTY_CYCLE_MAGNIFIER + DUTY_CYCLE_MAGNIFIER;
//            analogWrite(LED_PIN, dutyCycle);
//            delayMicroseconds(PULSE_RATE_MICROS);
//        }
//    }

    analogWrite(LED_PIN, LOW);

//    Serial.print("Battery: %/V: "); Serial.print(Bean.getBatteryPercentage()); Serial.print("/"); Serial.print((double) Bean.getBatteryVoltage() / 100);
    Serial.print(" | Sleeping: MILLIS: "); Serial.print(PULSE_SLEEP_MILLIS);
    Serial.print(" SECONDS: "); Serial.print(PULSE_SLEEP_SECONDS);
    Serial.print(" MINUTES: "); Serial.print(PULSE_SLEEP_MINUTES);
    Serial.print(" HOURS: "); Serial.println(PULSE_SLEEP_HOURS);

    Bean.sleep(PULSE_SLEEP_MILLIS);
}

