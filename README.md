# Tardis


## Contents

- [Micro-controllers](#micro-controllers)
- [References](#references)
- [Code examples](#code-examples)
  - [How to blink a light](#how-to-blink-a-light)
  - [How to pulse a light](#how-to-pulse-a-light)
- [Bean notes](#bean-notes)



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
- http://www.maddmansrealm.com/drwho/tardis/sounds/sounds.htm - Tardis sound files


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


## Bean notes
### General
- `delay()` will not evaluate an expression, so don't do math in it to calculate
  the time to delay in a human readable format.

### Development
- Install Bean Loader - https://punchthrough.com/bean/guides/everything-else/downloads/#software-downloads
- Install Ardunio IDE - https://www.arduino.cc/en/Main/Software

As easy as:

1. Write code in Arduino IDE
2. Verify code in Arduino IDE (it's a button to click)
3. Upload code in Arduino IDE (it's another button to click)
4. Program Skitch in Bean Loader (contextual menu item / assumes connection to
   the Bean is good)
