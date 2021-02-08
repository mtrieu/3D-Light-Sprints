int led_1 = 3;           // the PWM pin the LED is attached to
int led_2 = 5;           // the PWM pin the LED is attached to

int brightness_1 = 175;    // how bright the LED is
int brightness_2 = 60;    // how bright the LED is

int fadeAmount_1 = 5;    // how many points to fade the LED by
int fadeAmount_2 = 5;    // how many points to fade the LED by

void setup() {
  // put your setup code here, to run once:
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//set brightness of the pins
analogWrite(led_1, brightness_1);
analogWrite(led_2, brightness_2);

  // change the brightness for next time through the loop:
  brightness_1 = brightness_1 + fadeAmount_1;
  brightness_2 = brightness_2 + fadeAmount_2;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness_1 <= 7 || brightness_1 >= 205) {
    fadeAmount_1 = -fadeAmount_1;
  } if (brightness_2 <= 5 || brightness_2 >= 175) {
    fadeAmount_2 = -fadeAmount_2;
  }
    // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
