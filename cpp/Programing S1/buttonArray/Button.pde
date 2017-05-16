class Button {
  float x;
  float y;
  float w;
  float h;
  boolean on;
  Button(float tempX, float tempY, float tempW, float tempH) {
    x= tempX;
    y= tempY;
    w= tempW;
    h= tempH;
    on=false;
  }
void display(){
  background(255);
  stroke(0);
  if(mouseX>= x && mouseX<=w+x && mouseY>= y && mouseY <= h+y){
    fill(55,85,115);
    
  } else {
    fill(155);
  
}
rect(x,y,w,h);
}
}
}