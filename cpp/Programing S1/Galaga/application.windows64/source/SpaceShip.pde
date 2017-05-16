PImage SwordFish;
class SwordFish {
  String name;
  int x, y, w, h, lx, ly, lx2, ly2;
  int speed;
  int laser, lWidth, lHeight;
  int pu;

  SwordFish(int x, int y, int w, int h, int laser, int lWidth, int lHeight) {
    this.x=x;
    this.y=y;
    this.w=w;
    this.h=h;
    this.laser=laser;
    this.lWidth=lWidth;
    this.lHeight=lHeight;
    lx=x;
    ly=y;
    lx2=x;
    ly2=y;
    SwordFish= loadImage("SwordFish.png");
    pu=0;
  }
  void display() {
    imageMode(CENTER);
    image(SwordFish, x, y);
  }
  boolean destroy(int ax, int ay, int aw, int ah, int laser) {
    boolean destroyed = false;
    if (ax-(aw/2) >= x-(w/2) &&
      ax+(aw/2) <= x+(w/2) &&
      ay-(ah/2) >= y-(h/2)-laser &&
      ay+(ah/22) <= x+(h/2)){
        destroyed= true;
        speed=0;
        x= -100;
        y=-100;
        w=0;
        h=0;
      }
      return destroyed;
  }
}