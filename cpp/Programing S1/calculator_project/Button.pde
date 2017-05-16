class Button{
  color b1,b2,t1,t2;
  int x,y,w,h;
  String val;
  Boolean over= false;
  Boolean isNumber;
  Boolean isSpecial;
  float numVal;
  String opVal;

    //Button(color b1, color c, int x, int  y, int w, int h, String val) {
    //this.b1=b1;
    //this.x=x;
    //this.y=y;
    //this.h=h;
    //this.w=w;
    //this.val=val;
    //over=false;
    //}
  Button(int x, int y){
    this.x=x;
    this.y=y;
  }
  
  Button asNumber(float tempnumVal, int tempW, int tempH, color numB1, color numT){
    isNumber=true;
    numVal=tempnumVal;
    w=tempW;
    h=tempH;
    b1=numB1;
    t1=numT;
    return this;
  }
  Button asOperator(String tempopVal, int tempW, int tempH, color opB2, color opT){
    opVal=tempopVal;
    w=tempW;
    h=tempH;
    b2= opB2;
    t2=opT;
    return this;
  }
  Button asSpecial(String butVal,int tempW, int tempH){
    isSpecial=true;
    val=butVal;
    w=tempW;
    h=tempH;
    return this;
  }
  void display(){
   if(isNumber){
    stroke(1);
    fill(b1);
    rect(x,y-50,w,h+50);
    noStroke();
    fill(b1);
    rect(x+1, y, w-1, h);
    fill(t1);
    text(numVal, x+5, y+20);
   }else if(isSpecial){
     stroke(1);
     fill(b2);
     rect(x,y,w,h);
     fill(t2);
     text(opVal,x+3,y+5);
   }
  }
  void clickButton(){
    over= mouseX> x && mouseX< x+w && mouseY> y && mouseY< y+h;
  }
}