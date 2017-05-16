int x, y;

void setup() {
  size(400,400);
  frameRate(10);

  x = 0;
  y = 0;
}

void draw() {
  fill(255);
  drawName();
  noLoop();
}


void drawName() { //<>//
  moveRight(5);
  moveDown(12);
  moveUp(12);
  moveDiagND(3);
  moveDiagPD(3);
  moveDiagND(3);
  moveDiagPD(3);
  moveRight(5);
  moveUp(6);
  moveDiagND(2);
  moveDiagPD(2);
  moveDiagND(2);
  moveRight(3);
  moveDiagN(2);
  moveDiagP(2);
  moveDiagND(2);
  moveDiagPD(2);
  moveRight(4);
  moveDiagN(2);
  moveDiagP(2);
  moveDiagND(2);
  moveDiagPD(2);
  moveRight(3);
  moveUp(6);
  moveDown(3);
  moveDiagP(2);
  moveDiagPD(2);
  moveDiagND(3);
  moveRight(2);
  moveDiagP(3);
  moveDiagN(3);
  moveDiagP(3);
}


void moveRight(int rep) {
  for(int i=0;i<rep*10;i++){
    point(x+i,y);
  }
  x=x+(10*rep);
}
void moveDown(int rep) {
  for(int i=0;i<rep*10;i++){
    point(x,y+i);
  }
  y=y+(10*rep);
}
void moveUp(int rep) {
  for(int i=0;i<rep*10;i++){
    point(x,y-i);
  }
  y=y-(10*rep);
}
void moveLeft(int rep) {
  for(int i=0;i<rep*10;i++){
    point(x-i,y);
  }
  x=x-(10*rep);
}
void moveDiagP(int rep) {
  for(int i=0;i<rep*10;i++){
    point(x+i,y-i);
  }
  x=x+(10*rep);
  y=y-(10*rep);
}
void moveDiagN(int rep) {
  for(int i=0;i<rep*10;i++){
    point(x-i,y-i);
  }
  x=x-(10*rep);
  y=y-(10*rep);
}
void moveDiagND(int rep) {
  for(int i=0;i<rep*10;i++){
    point(x+i,y+i);
  }
  x=x+(10*rep);
  y=y+(10*rep);
}
void moveDiagPD(int rep) {
  for(int i=0;i<rep*10;i++){
    point(x-i,y+i);
  }
  x=x-(10*rep);
  y=y+(10*rep);
}