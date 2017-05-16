Button[] numButton= new Button[2];
String displayVal ="0";
String compVal="";//string value left of te operator
String compVal2="";//String val right of the operator
float compValI=0;
float compValI2=0;
float result=0;
char opVal;
boolean firstNum;
void setup() {
  size(500, 325);
  frameRate(10);
  numButton[0]= new Button(0, 275).asNumber(0, 50, 50, color(255), color(0));
  numButton[1]= new Button(50, 275).asNumber(1, 50, 50, color(255), color(0));
  //numButton[2]= new Button(100,275).asNumber(2,50,50,color(0),color(255));
  //numButton[3]= new Button(150,275).asNumber(3,50,50,color(0),color(255));
  //numButton[4]= new Button(200,275).asNumber(4,50,50,color(0),color(255));
  //numButton[5]= new Button(250,275).asNumber(0,50,50,color(0),color(255));
  //numButton[6]= new Button(300,275).asNumber(1,50,50,color(0),color(255));
  //numButton[7]= new Button(350,275).asNumber(2,50,50,color(0),color(255));
  //numButton[8]= new Button(400,275).asNumber(3,50,50,color(0),color(255));
  //numButton[9]= new Button(450,275).asNumber(4,50,50,color(0),color(255));
  firstNum= true;
}
void draw() {
  for (int i=0; i < numButton.length; i++) {
    numButton[i].display();
    numButton[i].clickButton();
  }
  updateDisplay();
}
void mousePressed() {
  for (int i=0; i<numButton.length; i++) {
   numButton[i].clickButton();
    if (inumButton.clickButton) {
      if (firstNum) {
        println(i+""+inumButton.numButton);
        compVal+=int(inumButton.numButtonValue);
        displayVal= compVal;
      } else {
        compVal2+= int (inumButtonon.numButtonValue);
        displayVal=compVal2;
      }
    }
  }
}
void calculation() {
  compValI=float(compVal);
  compValI2=float(compVal2);
}

void updateDisplay() {
  rect();
  text()
}