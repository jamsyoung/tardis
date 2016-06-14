#include <math.h>

#define PIN_RED D0
#define PIN_GREEN D1
#define PIN_BLUE D2

void setup() {
    pinMode(PIN_RED, OUTPUT);
    pinMode(PIN_GREEN, OUTPUT);
    pinMode(PIN_BLUE, OUTPUT);
}

void loop() {
    // int in, out;

    // for (in = 0; in < 6.283; in = in + 0.001) {
    //     out = sin(in) * 127.5 + 127.5;
    //     analogWrite(PIN_RED, out);
    //     delay(1); // 1 millisecond delay makes a huge difference in the rate of the pulse
    // }

    digitalWrite(PIN_BLUE, 255);  // OFF
    digitalWrite(PIN_GREEN, 255); // OFF
/*
    digitalWrite(PIN_RED, 0);     // ON 100%
    delay(10);
    digitalWrite(PIN_RED, 255);   // OFF
    delay(10);
    digitalWrite(PIN_RED, 0);     // ON 100%
    delay(10);
    digitalWrite(PIN_RED, 255);   // OFF
    delay(10);
    digitalWrite(PIN_RED, 0);     // ON 100%
    delay(10);
    digitalWrite(PIN_RED, 255);   // OFF
    delay(10);

    // RED 100%
    analogWrite(PIN_RED, 0);     // ON 100%
    delay(2000);

    // FLASH BLUE
    digitalWrite(PIN_BLUE, 0);    // ON
    delay(10);
    digitalWrite(PIN_BLUE, 255);  // OFF
    delay(10);

    // RED 75%
    analogWrite(PIN_RED, 64);    // ON 75%
    delay(2000);

    // FLASH GREEN
    digitalWrite(PIN_GREEN, 0);    // ON
    delay(10);
    digitalWrite(PIN_GREEN, 255);  // OFF
    delay(10);

    // RED 50%
    analogWrite(PIN_RED, 128);   // ON 50%
    delay(2000);

    // FLASH YELLOW
    digitalWrite(PIN_BLUE, 0);    // ON
    digitalWrite(PIN_GREEN, 0);   // ON
    delay(10);
    digitalWrite(PIN_BLUE, 255);  // OFF
    digitalWrite(PIN_GREEN, 255); // OFF
    delay(10);

    // RED 25%
    analogWrite(PIN_RED, 192);   // ON 25%
    delay(2000);

    // FLASH PURPLE
    digitalWrite(PIN_RED, 0);    // ON
    digitalWrite(PIN_GREEN, 0);   // ON
    delay(10);
    digitalWrite(PIN_RED, 255);  // OFF
    digitalWrite(PIN_GREEN, 255); // OFF
    delay(10);

    // RED OFF
    analogWrite(PIN_RED, 255);   // OFF
    delay(2000);*/


    /*for (int value = 0; value <=255; value + 63) {
        analogWrite(PIN_RED, value);
        delay(1000);
    }

    delay(5000);*/
/*
    analogWrite(PIN_RED, 0);
    delay(1000);
    analogWrite(PIN_BLUE, 64);
    delay(1000);
    analogWrite(PIN_GREEN, 127);
    delay(1000);
    analogWrite(PIN_RED, 255);
    delay(1000);

    delay(5000);*/



/*
    analogWrite(PIN_RED, 0);
    analogWrite(PIN_GREEN, 200);
    delay(5000);

    analogWrite(PIN_RED, 100);
    analogWrite(PIN_GREEN, 100);
    delay(5000);

    analogWrite(PIN_RED, 200);
    analogWrite(PIN_GREEN, 0);
    delay(5000);
*/

/*
    int in;

    analogWrite(PIN_BLUE, 0);
    analogWrite(PIN_GREEN, 255);
    analogWrite(PIN_RED, 255);*/


    int in;

    for (in = 0; in <= 255; in++) {
        analogWrite(PIN_RED, in);
        delay(1);

        if (in == 255) {
            for (in = 255; in >= 0; in--) {
                analogWrite(PIN_RED, in);
            }
        }

        delay(1);
    }

}







// #include <math.h>


// int pin1 = D0;


// void setup() {
//     pinMode(pin1, OUTPUT);
// }


// void loop() {
//     float in, out;
//     int i;

    // pulse 50 times - 10 times is ~1:03
//     for (i = 0; i < 5; i++) {
//         for (in = 0; in < 6.283; in = in + 0.001) {
//             out = sin(in) * 127.5 + 127.5;
//             analogWrite(pin1, out);
//             delay(1); // 1 millisecond delay makes a huge difference in the rate of the pulse
//         }
//     }

    // then turn off for 55 minutes
    /*analogWrite(pin1, LOW);
    delay(1000 * 60 * 1);*/
// }


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
