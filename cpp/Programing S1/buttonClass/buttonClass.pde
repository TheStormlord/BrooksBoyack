Button b1;
void setup(){
  size(200,200);
  b1=new Button(color(255,30,50),20,20,50,50,"Test");
}
void draw(){
  b1.display();
  b1.hover(20,20);

}