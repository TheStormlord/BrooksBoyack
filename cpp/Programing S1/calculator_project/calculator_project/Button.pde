class Button{
  color b1,b2,t1,t2;
  int x,y,w,h;
  String spVal;
  Boolean over= false;
  Boolean isNumber=false;
  Boolean isSp=false;
  Boolean isOp=false;
  float numVal;
  String opVal;


  Button(int x, int y){
    this.x=x;
    this.y=y;
  }
  
  Button asNumber(float numVal, int w, int h, color b1, color t1){
    this.numVal=numVal;
    this.w=w;
    this.h=h;
    this.b1=b1;
    this.t1=t1;
    isNumber=true;
    return this;
  }
  Button asOp(String opVal, int w, int h, color b2, color t2){
    
    this.opVal=opVal;
    this.w=w;
    this.h=h;
    this.b2= b2;
    this.t2=t2;
    isOp= true;
    return this;
  }
  Button asSp(String butVal,int w, int h,color b2, color t2){
    isSp=true;
    spVal=butVal;
    this.w=w;
    this.h=h;
    this.b2=b2;
    this.t2=t2;
    return this;
  }
  void display() {
   if (isNumber) {
    stroke(1);
    fill(b1);
    rect(x,y-50,w,h+50);
    noStroke();
    fill(b1);
    rect(x+1, y, w-1, h);
    fill(t1);
    text(int(numVal), x+5, y+20);
   } else if (isOp) {
     stroke(1);
     fill(b2);
     rect(x,y,w,h);
     fill(t2);
     text(opVal,x+2,y+30);
   } else if (isSp){
     stroke(1);
     fill(b2);
     rect(x,y,w,h);
     fill(t2);
     text(spVal,x+12,y+65);
   }
  }
  void clickButton(){
    over= mouseX> x && mouseX< x+w && mouseY> y && mouseY< y+h;
  }
}