class Button {
  //meber variables
  color b1, b2, t1, t2; // color val for button and text
  int x, y, w, h; 
  String val;
  Boolean over;

  //constuctor
  Button(color b1, int x, int  y, int w, int h, String val) {
    this.b1=b1;
    this.x=x;
    this.y=y;
    this.h=h;
    this.w=w;
    this.val=val;
    over=false;
  }
  //display
  void display() {
    if (over) {
     noStoke();
      fill(150);
      rect(x, y, w, h, 10);
      fill(255,0,0);
      rect(x-3, y-3, w, h, 10);
      fill(t1);
      text(val, x+5, y+10);
    } else {
      fill(150);
      rect(x, y, w, h, 10);
      fill(b2);
      rect(x-3, y-3, w, h, 10);
      fill(t1);
      text(val, x+5, y+10);
    }
  }
  //hover
  void hover(int xpos, int ypos) {
    over = xpos>x && xpos< xpos+w && ypos>y && ypos<ypos+h;
  }
}