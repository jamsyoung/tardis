#include <math.h>

int pin1 = 0;

void setup() {
//    Serial.begin(57600);
    pinMode(pin1, OUTPUT);
}

void loop() {
    float in, out;
    int i;
Serial.println('hi');
    // pulse 5 times - about 30 seconds
    for (i = 0; i < 5; i++) {
        for (in = 0; in < 6.283; in = in + 0.001) {
            out = sin(in) * 127.5 + 127.5;
            analogWrite(pin1, out);
            delay(1); // 1 millisecond delay makes a huge difference in the rate of the pulse
        }
    }

    // turn off for 59 minutes
    analogWrite(pin1, LOW);
    //Bean.sleep(3540000); // 59 minutes 1000 * 60 * 59
    delay(3540000);
    
}


// Note: Code that blocks
// for too long (like more than 5 seconds), can make weird things happen (like
// dropping the network connection). The built-in delay function 
// safely interleaves required background activity, so arbitrarily long delays
// can safely be done if you need them.

// Not sure about Bean.sleep
