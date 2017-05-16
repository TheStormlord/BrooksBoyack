//creating car object
Car c1;
Car c2;
Car[] cars= new Car[100];
void setup() {
  size(1500,900);
  c1= new Car();
  c2= new Car();
  for(int i=0; i< cars.length;i++){
    cars[i]= new Car();
  }
}
void draw(){
background(0);
c1.drive();
c1.display();
c2.drive();
c2.display();
for(int i=0; i<cars.length;i++){
  cars[i].drive();
  cars[i].display();
}
}