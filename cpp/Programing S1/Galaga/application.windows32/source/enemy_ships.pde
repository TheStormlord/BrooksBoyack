PImage missle;
PImage missleFast;
class Missle {
  int x, y, h, w, speed, health;
  float r;
  boolean fast;
  boolean vis; 
  Missle(int x, int y, int w, int h, int speed) {
    this.x=x;
    this.y=y;
    this.h=h;
    this.w=w;
    this.speed=speed;
    vis=true;
    missleFast= loadImage("missleFast");
  }
  void display() {
    imageMode(CENTER);
    if (vis) {
    image(missleFast, x, y);
    } else {
      x=-100;
      y=-100;
      w=0;
      h=0;
      speed=0;
    }
  }
   boolean destroy(int ax, int ay, int aw, int ah, int laser) {
    boolean destroyed = false;
    if (ax-(aw/2) >= x-(w/2) && 
      ax+(aw/2) <= x+(w/2) && 
      ay-(ah/2) >= y-(h/2)-laser && 
      ay+(ah/2) <= y+(h/2)) {
      vis = false;
      destroyed = true;
      speed = 0;
      x = -100;
      y = -100;
      w = 0;
      h = 0;
    }
    return destroyed;
  }
}