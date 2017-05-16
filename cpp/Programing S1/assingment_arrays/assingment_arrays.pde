int x=50;
int y=50;
int w=100;
int h=75;

void setup(){
  size(200,200);
}
void draw(){
  background(255);
  stroke(0);
  if(mouseX>= x && mouseX<=w+x && mouseY>= y && mouseY <= h+y){
    fill(55,85,115);
    
  } else {
    fill(155);
  
}
rect(x,y,w,h);
}