# Tardis


## Contents

- Microcontrollers
- References
- Code examples
  - How to blink a light
  - How to pulse a light




## Micro-controllers

- Arduino - https://www.arduino.cc
- Particle / Spark - https://www.particle.io
- Bean - http://legacy.punchthrough.com/bean/
- Bean+ Kickstarter - https://www.kickstarter.com/projects/1966384672/a-bluetooth-arduino-for-the-mobile-age-lightblue-b


## References

- https://www.sparkfun.com/tutorials/329 (arduino)
- https://www.arduino.cc/en/Tutorial/Foundations (arduino)
- https://www.arduino.cc/en/Tutorial/Sketch (arduino)
- https://www.parallax.com (parts)
- http://www.phidgets.com (sensors)



## Code examples
### How to blink a light
#### blink.ino (spark core)

```c
int led1 = D0;


void setup() {
    pinMode(led1, OUTPUT);
}


void loop() {
    // turn on for 5 minutes
    digitalWrite(led1, HIGH);
    delay(1000 * 60 * 5);
    // delay(1000 * 1);

    // turn off for 55 minutes
    digitalWrite(led1, LOW);
    delay(1000 * 60 * 5);
    // delay(1000 * 1);
}
```



### How to pulse a light
#### pulse.ino (arduino)

```c
const int LED = 11;

void loop() {
  float in, out;

  for (in = 0; in < 6.283; in = in + 0.001)
  {
    out = sin(in) * 127.5 + 127.5;
    analogWrite(LED,out);
  }
}
```

#### pulse.ino (spark)
The Spark Math library does not have sin()!

```c
int led1 = D0;


void setup() {
    pinMode(led1, OUTPUT);
}


void loop() {
    // The Spark Math library does not have a sin()!
    float out;
    for (out = 0; out <= 255; out++) {
        delay(10);
        analogWrite(led1, out);

        if (out == 255) {
            for (out = 255; out > 0; out--) {
                delay(10);
                analogWrite(led1, out);
            }
        }
    }
}
```
