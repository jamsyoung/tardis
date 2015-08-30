#include <math.h>


int pin1 = D0;


void setup() {
    pinMode(pin1, OUTPUT);
}


void loop() {
    float in, out;
    int i;

    // pulse 50 times - 10 times is ~1:03
    for (i = 0; i < 5; i++) {
        for (in = 0; in < 6.283; in = in + 0.001) {
            out = sin(in) * 127.5 + 127.5;
            analogWrite(pin1, out);
            delay(1); // 1 millisecond delay makes a huge difference in the rate of the pulse
        }
    }

    // then turn off for 55 minutes
    /*analogWrite(pin1, LOW);
    delay(1000 * 60 * 1);*/
}


/*
void nonSinPulse() {
    float out;

    for (out = 0; out <= 255; out++) {
        delay(10);
        analogWrite(pin1, out);

        if (out == 255) {
            for (out = 255; out > 0; out--) {
                delay(10);
                analogWrite(pin1, out);
            }
        }
    }
}
*/
