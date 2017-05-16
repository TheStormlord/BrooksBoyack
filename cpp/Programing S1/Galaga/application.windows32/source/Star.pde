class Star{
  int x,y, speed;
  float r;
  boolean light;
  Star(int x, int y, int speed){
    float r= random(10);
    this.x =x;
    this.y= y;
    if(r>6){
      light= false;
      strokeWeight(random(2,5));
    }else{
      light= true;
      strokeWeight(1);
    }
    this.speed= speed;
  }
  void display(){
    if(light){
      stroke(186,159,46);
      line(x,y,x,y+50);
    }else{
      stroke(186,159,46);
      line(x,y,x,y+50);
    }
  }
}