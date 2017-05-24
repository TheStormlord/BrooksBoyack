# Programing Protfolio
## Brooks Boyack 2017

I am Brooks Boyack I started in a programing class where I learned how to use processing and i certified in C++
Project 1 


```C++
#include<iostream>
#include<array>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int xRan;
	srand(time(0)); //randomized number by help of time.
	int sides;
	int ammount;
	cout << "Wellcome to the dice roller" << endl;
	cout << "How many sides does your die have? (numerals only)" << endl;
	cin >> sides;
	xRan=rand()%sides+1; // Randomizing the number based on input.
	int dice[sides];
	for (int i=1; i < sides; i++){
		dice[sides] = i + 0;
	}
	 int result = rand() % dice[sides] + 1;

	cout << "Result" << endl;
	cout << result << endl;
	return 0;
} 
```
A dice rolling app that randomly call a number from 1-x. 
```Java script
Button[] numButton= new Button[10];
Button[] opButton= new Button[11];
Button[] spButton= new Button[1];
String displayVal ="0";
String compVal="";//string value left of te operator
String compVal2="";//String val right of the operator
float compValI=0;
float compValI2=0;
float result=0;
char opVal;

boolean firstNum;
void setup() {
  size(700, 325);
  frameRate(10);
  numButton[0]= new Button(0, 275).asNumber(0, 50, 50, color(255), color(0));
  numButton[1]= new Button(50, 275).asNumber(1, 50, 50, color(255), color(0));
  numButton[2]= new Button(100, 275).asNumber(2, 50, 50, color(255), color(0));
  numButton[3]= new Button(150, 275).asNumber(3, 50, 50, color(255), color(0));
  numButton[4]= new Button(200, 275).asNumber(4, 50, 50, color(255), color(0));
  numButton[5]= new Button(250, 275).asNumber(5, 50, 50, color(255), color(0));
  numButton[6]= new Button(300, 275).asNumber(6, 50, 50, color(255), color(0));
  numButton[7]= new Button(350, 275).asNumber(7, 50, 50, color(255), color(0));
  numButton[8]= new Button(400, 275).asNumber(8, 50, 50, color(255), color(0));
  numButton[9]= new Button(450, 275).asNumber(9, 50, 50, color(255), color(0));
  opButton[9]= new Button(550,225).asOp("√x",50,100,color(255),color(0));
  opButton[0]= new Button(37, 225).asOp("+", 25, 50,color(0),color(255));
  opButton[1] = new Button(87, 225).asOp("-", 25, 50,color(0),color(255));
  opButton[2] = new Button(137, 225).asOp("×", 25, 50, color(0),color(255));
  opButton[3]= new Button(237, 225).asOp("÷", 25, 50, color (0), color(255));
  opButton[4]= new Button(600, 225).asOp("=", 50, 100, color (255), color(0));
  opButton[5]= new Button(650,225).asOp("C",50,100,color(255),color(255,50,50));
  opButton[6]= new Button(287,225).asOp("+/-",25,50,color(0),color(255));
  opButton[7]= new Button(387,225).asOp("%",25,50,color(0),color(255));
  opButton[8]= new Button(437,225).asOp("x^2",25,50,color(0),color(255));
  opButton[10]= new Button(487,225).asOp("1/x",25,50,color(0),color(255));
  spButton[0]= new Button(500, 225).asSp(".", 50, 100, color(255), color(0));
  
  
  firstNum= true;
}
void draw() {
  noStroke();
  fill(185, 40, 40);
  ellipse(150,125,300,200);
  rect(0,115,700,200);
  strokeWeight(3);

  for (int i=0; i < numButton.length; i++) {
    numButton[i].display();
    numButton[i].clickButton();
  }
  for (int i=0; i<spButton.length; i++) {
    Button iSpButton=spButton[i];
    iSpButton.display();
  }
  for (int i=0; i<opButton.length; i++) {
    opButton[i].display();
    opButton[i].clickButton();
  }
  
  updateDisplay();
}
void mousePressed() {
  for (int i=0; i<numButton.length; i++) {
    Button inumButton= numButton[i];
    inumButton.clickButton();
    if (inumButton.over) {
      if (firstNum) {
        println(i+""+inumButton.numVal);
        compVal+=int(inumButton.numVal);
        displayVal=compVal;
      } else {
        compVal2+= int(inumButton.numVal);
        displayVal=compVal2;
      }
    }
  }
  for (int i=0; i<opButton.length; i++) {
    Button iOpButton= opButton[i];
    iOpButton.clickButton();
    if (iOpButton.over) {
      if (iOpButton.opVal== "+") {
        if (result !=0) {
          opVal='+';
          compVal2="";
          firstNum=false;
        } else {
          opVal ='+';
          firstNum=false;
          displayVal="+";
        }
      } else if (iOpButton.opVal == "=") {
        firstNum= true;
        calculation();
      } else if (iOpButton.opVal=="-") {
        if (result !=0) {
          opVal= '-';
          compVal2="";
          firstNum=false;
          displayVal= "-";
        } else {
          opVal='-';
          firstNum= false;
          displayVal="-";
        }
      } else if (iOpButton.opVal=="×") {
        if (result !=0) {
          opVal= '*';
          compVal2="";
          firstNum=false;
          displayVal= "×";
        } else {
          opVal='*';
          firstNum= false;
          displayVal="×";
        }
      } else if (iOpButton.opVal=="÷") {
        if (result !=0) {
          opVal= '/';
          compVal2="";
          firstNum=false;
          displayVal= "÷";
        } else {
          opVal='/';
          firstNum=false;
          displayVal="÷";
        }
      }   else if (iOpButton.opVal=="C") {
      displayVal="0";
      opVal='C';
      compVal="";
      compVal2="";
      compValI=0;
      compValI2=0;
      result=0;
      firstNum=true;
    }else if (iOpButton.opVal=="+/-"){
      opVal = 'n';
     calculation();
    }else if(iOpButton.opVal=="%"){
      opVal='%';
      calculation();
    }else if(iOpButton.opVal=="x^2"){
      opVal='s';
      calculation();
    }else if(iOpButton.opVal=="1/x"){
      opVal='f';
      calculation();
    }else if(iOpButton.opVal=="√x"){
      opVal='q';
      calculation();
    }
    
    else {
        opVal='+';
        firstNum= false;
        displayVal = "+";
      }
    }
  }


  for (int i=0; i<spButton.length; i++) {
    Button iSpButton= spButton[i];
    iSpButton.clickButton();
    if (iSpButton.over) {
      if (iSpButton.spVal ==".") {
        if (iSpButton.over && firstNum== true) {
          compVal += iSpButton.spVal;
          displayVal= compVal;
        } else if (iSpButton.over && firstNum== false) {
          compVal2 += iSpButton.spVal;
          displayVal= compVal2;
        }
      }
    }
  
  }
}
void calculation() {
  compValI=float(compVal);
  compValI2=float(compVal2);
  if (opVal == '+') {
    result= compValI+ compValI2;
    displayVal= str(result);
  } else if (opVal == '-') {
    result= compValI- compValI2;
    displayVal= str(result);
  } else if (opVal =='/') {
    result= compValI/compValI2;
    displayVal= str(result);
  } else if (opVal =='*') {
    result= compValI * compValI2;
    displayVal=str(result);
  } else if (opVal=='n'){
    if(firstNum){
      compValI=compValI*-1;
      displayVal= str(compValI);
    }else{
      compValI2=compValI2*-1;
      displayVal=str(compValI);
    }
  }else if(opVal=='%'){
    if(firstNum){
      compValI=compValI/100;
      displayVal=str(compValI);
    }else{
      compValI2=compValI2/100;
      displayVal=str(compValI);
    }
  }else if(opVal=='s'){
    if(firstNum){
      compValI=compValI*compValI;
      displayVal=str(compValI);
    }else
    compValI2=compValI2*compValI2;
    displayVal=str(compValI);
  }else if(opVal=='f'){
    if(firstNum){
      compValI=1/compValI;
      displayVal=str(compValI);
    }else
    compValI2=1/compValI2;
    displayVal=str(compValI);
  }else if(opVal=='q'){
    if(firstNum){
      compValI=sqrt(compValI);
      displayVal=str(compValI);
    }else
    compValI2=sqrt(compValI2);
    displayVal=str(compValI);
  }
  if (firstNum) {
    compVal=displayVal;
  } else {
    compVal=displayVal;
    compVal2="";
  }
}

void updateDisplay() {
  fill(255);
  stroke(3);
  rect(250, 125, 225, 75);
  fill(0);
  text(displayVal, 270, 168);
}
```
A piano shaped calculator using GUI to oporate it. 
