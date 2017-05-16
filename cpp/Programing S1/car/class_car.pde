class Car {
  color c;
  color c1;
  float xpos;
  float ypos;
  float xspeed;
  Car() {//construct
    c=color(random(25,255),random(25,255),random(25,255));
    c1=color(255);
    xpos=width/2;
    ypos=random(15,height);
    xspeed=random(1,5);
  }
  //rendre methodes
  void display(){ 
    rectMode(CENTER);
    fill(c);
    triangle(xpos,ypos,xpos-55,ypos-10,xpos-75,ypos);
    fill(c1);
    rect(xpos-13,ypos-8,10,3);
    rect(xpos-13,ypos+8,10,3);
    rect(xpos+13,ypos-8,10,3);
    rect(xpos+13,ypos+8,10,3);
  }
  void drive() {
    xpos=xpos+xspeed;
    if (xpos> width) {
      xpos=0;
    }
  }
}