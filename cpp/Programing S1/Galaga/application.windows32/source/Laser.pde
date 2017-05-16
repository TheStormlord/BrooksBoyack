class Laser{
  int x,y,w,lx1,ly1,h,laser;
  
  Laser(int x, int y, int w,int h, int laser){
    this.x=x;
    this.y=y;
    this.w=w;
    this.h=h;
    this.laser=laser;
  }
  void shoot(){
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