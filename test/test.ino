#include <ezButton.h>
#include <ros.h>

#define CLK_PIN_base 18
#define DT_PIN_base 19
#define SW_PIN_base 4
volatile long counter_base = 0;
volatile unsigned long last_time_base;  // for debouncing
long prev_counter_base;
ezButton button_base(SW_PIN_base);
long countsPerRotation_base = 1024;
long angle_base = 0;
const int referenceAngle_base = 0;

ros::NodeHandle nh;

void setup(){

  pinMode(CLK_PIN_base, INPUT_PULLUP);
  pinMode(DT_PIN_base, INPUT_PULLUP);
  button_base.setDebounceTime(50);
  attachInterrupt(digitalPinToInterrupt(CLK_PIN_base), ISR_encoderChange_base, RISING);

  nh.initNode();
}

void loop(){
  nh.spinOnce();
  button_base.loop(); 
  delay(1);
}

void ISR_encoderChange_base() {
  if ((millis() - last_time_base) < 50)  // debounce time is 50ms
    return;


  if (digitalRead(DT_PIN_base) == HIGH) {
    // the encoder is rotating in counter-clockwise direction => decrease the counter
    counter_base--;
  } 
  else {
    // the encoder is rotating in clockwise direction => increase the counter
    counter_base++;
  }
  angle_base = referenceAngle_base + (counter_base * 360 / countsPerRotation_base);
  char charArray[20];
  nh.loginfo("Base:");
  nh.loginfo(ltoa(angle_base, charArray, 10));
  
  last_time_base = millis();
}
