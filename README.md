# Programing Protfolio
## Brooks Boyack 2017

I am Brooks Boyack I started in a programing class where I learned how to use processing and I am certified in C++
Project 1 

#Dice roller
A dice rolling app that randomly call a number between 1 and x. 
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

#Calculator 
A piano shaped calculator using GUI to oporate it. 
![alt text](https://github.com/TheStormlord/BrooksBoyack/blob/master/images/Calc.png "Calc test")
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
#Shapes Cacluator
This project was used to calculat the surface area and volume of given shapes
``` C++
// Brooks Boyack /=====\ 2-22-17
//                 <|>
//                  |
// added encapsulation ,volume for sphere, pyramid, and dodeceaherdron. Placed volume and suface area call inside Class. Put al of the shapes together.

#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;

class Box {
    public:
        double bx;
        double by;
        double bz;
    double boxVol(double bx , double by, double bz){
        double vResult = bx * by * bz;
        return vResult;
    }
    double boxSur(double bx , double by, double bz){
        double sResult = 2*(by*bx+by*bz+bz*bx);
        return sResult;
    }
};
class Sphere{
    public:
        double r;
    double sVol(double r)  {
        double result = ((4.0 / 3.0) * M_PI * (r * r * r));
        return result; 
    }
    double sSur(double r){
        double result= 4.0 * M_PI * pow(r,2);
        return result;
    }
};
class Pyramid{
    public:
        double l;
        double w;
        double h;
    double pVol(double l, double w, double h){
        double result= (l*w*h)/3;
        return result;
    }
    double  pSur(double l, double w, double h){
        double result= l * w + l * sqrt( pow (w / 2, 2) + pow(h, 2)) + w * sqrt(pow(l/2,2)+ pow(h, 2));
        return result;
    }
};
class Dodeca{
   public:
      double e;
      double dVol(double e){
         double result= (((15+7)*sqrt(5))/4) * pow (e,3);
         return result;
      }
     double dSur(double e){
      double result = 3*sqrt(25+(10 * sqrt(5))) * pow(e,2);
      return result;
     }
};

int main( ) {
    
    Box B1;
    double bVolume = 0.0;
    double bSurface = 0.0;
    B1.bx;
    B1.by;
    B1.bz;
   Pyramid P1;
   double pVolume = 0.0;
   double pSurface = 0.0;
   P1.l;
   P1.w;
   P1.h;
   Sphere S1;
   double sVolume = 0.0;
   double sSurface = 0.0;
   S1.r;
   Dodeca D1;
   double dVolume = 0.0;
   double dSurface = 0.0;
   D1.e;
   //box
   cout << "what is the height of the box?" << endl;
   cin >> Box1.h;
   cout << "what is the length of the box?" << endl;
   cin >> Box1.l;
   cout << "what is the width of the box?" << endl;
   cin >> Box1.b;
	
   // volume of box 1
    cout << "Volume = " << B1.boxVol(B1.b,B1.l,B1.h) << endl;
    cout << "Surface area = " << B1.boxSur(B1.b,B1.l,B1.h)  <<endl;
    

    //sphere
    cout << "What is the Radius of your Sphere?"<< endl;
    cin >> S1.r;
    cout << "Volume = " << S1.sVol(S1.r) << endl;
    cout << "Surface area = " << S1.sSur(S1.r) << endl;
    

    // pyramid. 
    cout << "What is the Legth of the Base of the Pyramid?" << endl;
    cin >> P1.l;
    cout << "What is the Width of the Base of the Pyramid?" << endl;
    cin >> P1.w;
    cout << "What is the Height of your Pyramid?"<< endl;
    cin >> P1.h;
    cout << "Volume = " << P1.pVol(P1.l,P1.w,P1.h) << endl;
    cout << "Surface area = " << P1.pSur(P1.l,P1.w,P1.h) << endl;
    
    // dodeca
    cout << "What is the length of one edge of your Dodecahedron?" << endl;
    cin >> D1.e;
    cout << "Volume = " << D1.dVol(D1.e) << endl;
    cout << "Surface area = " << D1.dSur(D1.e) << endl;

    return 0;
}
```
# Etchasketch
This is an interactive etchasketch app where the useer moves the arrow keys to make art.
```Javascript
 int x, y;

void setup() {
  size(400, 400);
  frameRate(10);

  x = 0;
  y = 0;
}

void draw() {
  fill(255);
  //drawName();
  //noLoop();
  println(keyCode);
}


void drawName() {
  moveRight(5);
  moveDown(12);
  moveUp(12);
  moveDiagND(3);
  moveDiagPD(3);
  moveDiagND(3);
  moveDiagPD(3);
  moveRight(5);
  moveUp(6);
  moveDiagND(2);
  moveDiagPD(2);
  moveDiagND(2);
  moveRight(3);
  moveDiagN(2);
  moveDiagP(2);
  moveDiagND(2);
  moveDiagPD(2);
  moveRight(4);
  moveDiagN(2);
  moveDiagP(2);
  moveDiagND(2);
  moveDiagPD(2);
  moveRight(3);
  moveUp(6);
  moveDown(3);
  moveDiagP(2);
  moveDiagPD(2);
  moveDiagND(3);
  moveRight(2);
  moveDiagP(3);
  moveDiagN(3);
  moveDiagP(3);
}


void moveRight(int rep) {
  for (int i=0; i<rep*10; i++) {
    point(x+i, y);
  }
  x=x+(10*rep);
}
void moveDown(int rep) {
  for (int i=0; i<rep*10; i++) {
    point(x, y+i);
  }
  y=y+(10*rep);
}
void moveUp(int rep) {
  for (int i=0; i<rep*10; i++) {
    point(x, y-i);
  }
  y=y-(10*rep);
}
void moveLeft(int rep) {
  for (int i=0; i<rep*10; i++) {
    point(x-i, y);
  }
  x=x-(10*rep);
}
void moveDiagP(int rep) {
  for (int i=0; i<rep*10; i++) {
    point(x+i, y-i);
  }
  x=x+(10*rep);
  y=y-(10*rep);
}
void moveDiagN(int rep) {
  for (int i=0; i<rep*10; i++) {
    point(x-i, y-i);
  }
  x=x-(10*rep);
  y=y-(10*rep);
}
void moveDiagND(int rep) {
  for (int i=0; i<rep*10; i++) {
    point(x+i, y+i);
  }
  x=x+(10*rep);
  y=y+(10*rep);
}
void moveDiagPD(int rep) {
  for (int i=0; i<rep*10; i++) {
    point(x-i, y+i);
  }
  x=x-(10*rep);
  y=y+(10*rep);
}
void keyPressed() {
  if (key==CODED) {
    if (keyCode==RIGHT) {
      moveRight(1);
    } else    if (keyCode==LEFT) {
      moveLeft(1);
    } else if (keyCode==UP) {
      moveUp(1);
    } else if (keyCode==DOWN) {
      moveDown(1);
    }
  }
}
void mouseClicked() {
  saveFrame("line-######.png");
}
```
![alt text](https://github.com/TheStormlord/BrooksBoyack/blob/master/images/line1.png "Art 1" )
