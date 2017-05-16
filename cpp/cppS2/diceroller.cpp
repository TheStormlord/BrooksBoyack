#include<iostream>
#include<array>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int xRan;
	srand(time(0)); //randomized number by help of time.
	int sides;
	int ammount;
	cout << "Wellcome to the dice roller" << endl;
	cout << "How many sides does your die have? (numerals only)" << endl;
	cin >> sides;
	xRan=rand()%sides+1; // Randomizing the number based on input.
	int dice[sides];
	for (int i=1; i < sides; i++){
		dice[sides] = i + 0;
	}
	 int result = rand() % dice[sides] + 1;

	cout << "Result" << endl;
	cout << result << endl;
	return 0;
} 