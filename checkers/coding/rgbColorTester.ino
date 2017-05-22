const int redLEDPin = 11;
const int greenLEDPin = 9;
const int blueLEDPin = 10;

const int redPin = A3;
const int greenPin = A2;
const int bluePin = A1;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

int redButtonValue = 0;
int greenButtonValue = 0;
int blueButtonValue = 0;

/*int redSwitchState = 0;
int greenSwitchState = 0;
int blueSwitchState = 0;*/

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*redSwitchState = digitalRead(3);
  greenSwitchState = digitalRead(2);
  blueSwitchState = digitalRead(1);*/

  int keyValue = analogRead(A0);
  Serial.println(keyValue);

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
