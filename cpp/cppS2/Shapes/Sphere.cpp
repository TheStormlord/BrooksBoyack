#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;
class Sphere{
    public:
        double r;
    double calcVol(double r)  {
        double result = ((4.0 / 3.0) * M_PI * (r * r * r));
        return result; 
    }
};
int main() {
    Sphere Sphere1;
    double sVolume = 0.0;
    
    double sSurface = 0.0;
    Sphere1.r;
    
    cout << "What is the Radius of your Sphere?"<< endl;
    cin >> Sphere1.r;
    //sVolume = (4/3) * 3.14 *pow(Sphere1.r , 3);
    cout << "Volume = " << Sphere1.calcVol(Sphere1.r);
    sSurface = 4.0 * M_PI * pow(Sphere1.r,2);
    //cout << "Volume = " << sVolume << endl;
    cout << " Surface area = " << sSurface << endl;
    return 0;
}