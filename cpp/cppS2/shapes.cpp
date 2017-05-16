// Brooks Boyack /=====\
//                 <|>
//                  |
#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;

class Box {
    public:
        double bx;
        double by;
        double bz;
    double boxVol(double bx , double by, double bz){
        double vResult = bx * by * bz;
        return vResult;
    }
    double boxSur(double bx , double by, double bz){
        double sResult = 2*(by*bx+by*bz+bz*bx);
        return sResult;
    }
};
class Sphere{
    public:
        double r;
    double sVol(double r)  {
        double result = ((4.0 / 3.0) * M_PI * (r * r * r));
        return result; 
    }
    double sSur(double r){
        double result= 4.0 * M_PI * pow(r,2);
        return result;
    }
};
class Pyramid{
    public:
        double l;
        double w;
        double h;
    double pVol(double l, double w, double h){
        double result= (l*w*h)/3;
        return result;
    }
    double  pSur(double l, double w, double h){
        double result= l * w + l * sqrt( pow (w / 2, 2) + pow(h, 2)) + w * sqrt(pow(l/2,2)+ pow(h, 2));
        return result;
    }
};

int main(){
    Box B1;
    double bVolume = 0.0;
    double bSurface = 0.0;
    B1.bx;
    B1.by;
    B1.bz;
    Pyramid P1;
    double pVolume = 0.0;
    double pSurface = 0.0;
    P1.l;
    P1.w;
    P1.h;
    Sphere S1;
    double sVolume = 0.0;
    double sSurface = 0.0;
    S1.r;
    int shape;
    
    cout << "Welcome to the shape tester" << endl;
    cout << "Pick a shape. ( 1=Box, 2=Sphere, 3=Pyramid)" << endl;
    cin >> shape;
    if(shape=1){
    cout << "What is the Legth of your box?" << endl;
    cin >> B1.bx;
    cout << "What is the Width of your box?" << endl;
    cin >> B1.by;
    cout << "What is the Height of your box?"<< endl;
    cin >> B1.bz;
    cout << "Volume = " << B1.boxVol(B1.bx,B1.by,B1.bz) << endl;
    cout << "Surface area = " << B1.boxSur(B1.bx,B1.by,B1.bz)  <<endl;
    return 0;
    }
    if(shape=2){

    
    cout << "What is the Radius of your Sphere?"<< endl;
    cin >> S1.r;
    cout << "Volume = " << S1.sVol(S1.r) << endl;
    cout << "Surface area = " << S1.sSur(S1.r) << endl;
    return 0;
    }
    if(shape=3){
  
    
    cout << "What is the Legth of the Base of the Pyramid?" << endl;
    cin >> P1.l;
    cout << "What is the Width of the Base of the Pyramid?" << endl;
    cin >> P1.w;
    cout << "What is the Height of your Pyramid?"<< endl;
    cin >> P1.h;
    cout << "Volume = " << P1.pVol(P1.l,P1.w,P1.h) << endl;
    cout << "Surface area = " << P1.pSur(P1.l,P1.w,P1.h) << endl;
    return 0;
    }

}