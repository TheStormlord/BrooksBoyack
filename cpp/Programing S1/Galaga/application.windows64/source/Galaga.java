import processing.core.*; 
import processing.data.*; 
import processing.event.*; 
import processing.opengl.*; 

import processing.sound.*; 

import java.util.HashMap; 
import java.util.ArrayList; 
import java.io.File; 
import java.io.BufferedReader; 
import java.io.PrintWriter; 
import java.io.InputStream; 
import java.io.OutputStream; 
import java.io.IOException; 

public class Galaga extends PApplet {


Star[] s= new Star[10000];
SwordFish sf1;
Laser l1;
Missle[] m= new Missle[500];

int bg;
int score,missed, lW,lH;
float hit, fired;
public void setup() {
  
  sf1= new SwordFish(width/2,height/2,100,100,300,2,2);
  l1= new Laser(width/2,height/2,4,4,200);
  for(int i=0; i<s.length; i++){
    s[i]= new Star(PApplet.parseInt(random(width)), PApplet.parseInt(random(-10000,100)), PApplet.parseInt(random(5,20)));
  }
  for(int i=0; i<m.length; i++){
    m[i]= new Missle (PApplet.parseInt(random(width)), PApplet.parseInt(random(-10000,100)),20,20, PApplet.parseInt( 2));
  }
}
public void draw(){
  noCursor();
  sf1.x= mouseX;
  sf1.y= mouseY;
  pushMatrix();
  translate(3,-30);
  l1.x= mouseX+3;
  l1.y= mouseY-30;
  popMatrix();
  if(missed<1){
    background(41,38,0);
    for(int i=0;i<s.length;i++){
      s[i].display();
      s[i].y+= s[i].speed;
    }
    for(int i=0;i<m.length;i++){
      m[i].display();
      m[i].y+= s[i].speed;
    }
}
sf1.display();
}
class Laser{
  int x,y,w,lx1,ly1,h,laser;
  
  Laser(int x, int y, int w,int h, int laser){
    this.x=x;
    this.y=y;
    this.w=w;
    this.h=h;
    this.laser=laser;
  }
  public void shoot(){
    noStroke();
    for(int i=0; i<laser; i++){
      lx1=x;
      ly1=y;
      fill(76,165,199);
      ellipseMode(CENTER);
      ellipse(lx1, ly1-i, w,h);
      ly1-=i;
    }
  }
}
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
  public void display() {
    imageMode(CENTER);
    image(SwordFish, x, y);
  }
  public boolean destroy(int ax, int ay, int aw, int ah, int laser) {
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
  public void display(){
    if(light){
      stroke(186,159,46);
      line(x,y,x,y+50);
    }else{
      stroke(186,159,46);
      line(x,y,x,y+50);
    }
  }
}
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
  public void display() {
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
   public boolean destroy(int ax, int ay, int aw, int ah, int laser) {
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
  public void settings() {  size(700,700); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "--present", "--window-color=#666666", "--stop-color=#cccccc", "Galaga" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
