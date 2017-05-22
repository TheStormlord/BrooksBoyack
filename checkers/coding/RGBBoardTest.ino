#include <Arduino.h>
int keyValue;
/*int activate(int keyValue) {
    if (keyValue == 1023) {
      digitalWrite(11, 255);
    } else if (keyValue >= 990 && keyValue <= 1010) {
       digitalWrite(10, 255);
    } else if (keyValue >= 505 && keyValue <= 515) {
       digitalWrite(6, 255);
    } else {
      digitalWrite(13, 0);
      digitalWrite(12, 0);
      digitalWrite(11, 0);
      digitalWrite(10, 0);
      digitalWrite(9, 0);
      digitalWrite(8, 0);
      digitalWrite(7, 0);
      digitalWrite(6, 0);
      digitalWrite(5, 0);
      
    }
    return keyValue;
  }*/

class LED {
    int redPin;
    int greenPin;
    int bluePin;

    int redState;
    int greenState;
    int blueState;

    
  
  public:    
    LED(int rP, int gP, int bP/*, int kV*/) {
        redPin = rP;
        greenPin = gP;
        bluePin = bP;
        //keyValue = kV;
        pinMode(redPin, OUTPUT);
        pinMode(greenPin, OUTPUT);
        pinMode(bluePin, OUTPUT);
        
        redState = 0;
        greenState = 0;
        blueState = 0;
      }
    void Update() {
        if (keyValue == 1023) {
          digitalWrite(9, 255);
      } else if (keyValue >= 990 && keyValue <= 1010) {
          digitalWrite(10, 255);
      } else if (keyValue >= 505 && keyValue <= 515) {
          digitalWrite(10, 255);
      } else {
          digitalWrite(9, 0);
          digitalWrite(10, 0);
          digitalWrite(11, 0);
      }
    }
};

LED led1(11, 13, 12 );
LED led2(8, 10, 9 );
LED led3(5, 7, 6 );

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  keyValue = analogRead(A0);
  Serial.println(keyValue);
  led1.Update();
  led2.Update();
  led3.Update();
}
