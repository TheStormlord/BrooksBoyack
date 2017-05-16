void setup(){
  size(500,500);
  background(255);
  
}

void draw(){
  button(30,20,100,20,10,"next");
  button(30,80,100,30,10,"hi");
  button(150,20,100,30,12,"do not press");
  
}

void button(int x, int y, int w, int h, int ts,String bt){
  noStroke();
  fill(128);
  rect(x+3,y+3,w,h,30);
  stroke(0);
  fill(250,0,0);
  rect(x,y,w,h,30);
   
  fill(0);
  textSize(ts);
  text(bt,x+10,y+15);
  
  
}