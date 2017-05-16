import processing.sound.*;
Star[] s= new Star[10000];
SwordFish sf1;
Laser l1;
Missle[] m= new Missle[500];

color bg;
int score,missed, lW,lH;
float hit, fired;
void setup() {
  size(700,700);
  sf1= new SwordFish(width/2,height/2,100,100,300,2,2);
  l1= new Laser(width/2,height/2,4,4,200);
  for(int i=0; i<s.length; i++){
    s[i]= new Star(int(random(width)), int(random(-10000,100)), int(random(5,20)));
  }
  for(int i=0; i<m.length; i++){
    m[i]= new Missle (int(random(width)), int(random(-10000,100)),20,20, int( 2));
  }
}
void draw(){
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