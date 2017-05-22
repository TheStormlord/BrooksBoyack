
const int rgb1 = 10; //light starts as on needs another button
const int rgb2 = 11; //corresponds to button2
const int rgb3 = 12; //corresponds to button3
const int rgb4 = 13; //corresponds to button4

const int button1 = 5; //corresponds to rgb1
const int button2 = 6; //corresponds to rgb2
const int button3 = 7; //corresponds to rgb3
const int button4 = 4; //corresponds to rgb4

 int buttonState1 = 0;
 int buttonState2 = 0;
 int buttonState3 = 0;
 int buttonState4 = 0;


#define COMMON_ANODE

void setup() {
  pinMode(rgb1, OUTPUT);
  pinMode(rgb2, OUTPUT);
  pinMode(rgb3, OUTPUT);
  pinMode(rgb4, OUTPUT);
  //Buttons
  pinMode(button1, INPUT); //pin7
  pinMode(button2, INPUT); //pin6
  pinMode(button3, INPUT); //pin5

}

void loop() {
  //button
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);
  buttonState4 = digitalRead(button4);

    if (buttonState2 == HIGH) {
    digitalWrite(rgb1, LOW);
    digitalWrite(rgb2, HIGH);
    digitalWrite(rgb3, LOW);
    digitalWrite(rgb4, LOW);
  }
  if (buttonState3 == HIGH ) {
    digitalWrite(rgb1, LOW);
    digitalWrite(rgb2, LOW);
    digitalWrite(rgb3, HIGH);
    digitalWrite(rgb4, LOW);
  }
  if (buttonState4 == HIGH ) {
    digitalWrite(rgb1, LOW);
    digitalWrite(rgb2, LOW);
    digitalWrite(rgb3, LOW);
    digitalWrite(rgb4, HIGH);
  }
  if (buttonState1 == HIGH ) {
    digitalWrite(rgb1, HIGH);
    digitalWrite(rgb2, LOW);
    digitalWrite(rgb3, LOW);
    digitalWrite(rgb4, LOW);
  }
}


