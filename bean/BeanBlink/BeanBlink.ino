#include <math.h>

int pin1 = 0;

void setup() {
    Serial.begin(57600);
    pinMode(pin1, OUTPUT);
}

void loop() {  
    float in, out;
    int i;

    // pulse 50 times - about 5 minutes
    for (i = 0; i < 50; i++) {
        for (in = 0; in < 6.283; in = in + 0.001) {
            out = sin(in) * 127.5 + 127.5;
            analogWrite(pin1, out);
            delay(1); // 1 millisecond delay makes a huge difference in the rate of the pulse  
        }
    }

    // turn off for 1 minute
    analogWrite(pin1, LOW);
    Bean.sleep(3300000); // 55 minutes 1000 * 60 * 55
}
