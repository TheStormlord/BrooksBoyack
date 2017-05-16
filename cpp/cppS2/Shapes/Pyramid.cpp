   #include <iostream>
#include <string>
#include <cmath>
using namespace std;
   class Pyramid{
    public:
        double l;
        double w;
        double h;
};
int main(){
    Pyramid Pryamid1;
    double pVolume = 0.0;
    double pSurface = 0.0;
    Pryamid1.l;
    Pryamid1.w;
    Pryamid1.h;
    
    cout << "What is the Legth of the Base of the Pyramid?" << endl;
    cin >> Pryamid1.l;
    cout << "What is the Width of the Base of the Pyramid?" << endl;
    cin >> Pryamid1.w;
    cout << "What is the Height of your Pyramid?"<< endl;
    cin >> Pryamid1.h;
    pVolume =     ((Pryamid1.l * Pryamid1.w * Pryamid1.h) / 3);
    pSurface = Pryamid1.l * Pryamid1.w + Pryamid1.l * sqrt( pow ( Pryamid1.w / 2, 2) + pow(Pryamid1.h, 2)) + Pryamid1.w * sqrt(pow(Pryamid1.l/2,2)+ pow(Pryamid1.h, 2));
    cout << "Volume = " << pVolume << endl;
    cout << "Surface area = " << pSurface << endl;
}