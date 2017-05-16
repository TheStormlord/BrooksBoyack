// Brooks Boyack 2/2/17
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main() {
    string day = "";
    string month = "";
    string year = "";
    cout << "What year were you born (YYYY)" << endl;
    getline (cin, year);
    int c = atoi(year.c_str() );
    cout << "What month were you born (MM)" << endl;
    getline (cin, month);
    int b = atoi(month.c_str() );
    cout << "What day were you born (DD)" << endl;
    getline (cin, day);
    int a = atoi(day.c_str() );
    int secc = c * 31536000;
    int secb = b * 2678400;
    int seca = a * 86400;
    int totalsec = secc + secb + seca;
    time_t now = time(0);
    int yourage = (now + (1970 * 31536000)- totalsec);
    cout << "You have lived " << yourage << "seconds" << endl;
    int yearslived = yourage / 31536000;
    int monthslived = yearslived * 12;
    int dayslived = yourage / 86400;
    float decadeslived = yearslived / 10;
    float centurieslived = decadeslived /10;
    float millenniumslived = centurieslived /10;
    cout << "You have lived " << yearslived << " years" << endl;
    cout << "You have lived " << monthslived << " months" << endl;
    cout << "You have lived " << dayslived << " days" << endl;
    cout << "You have lived " << decadeslived << " decades" << endl;
    cout << "You have lived " << centurieslived << " centuries" << endl;
    cout << "You have lived " << millenniumslived << " millennia" << endl;
    return 0;
}