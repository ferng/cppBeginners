#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double sideA, sideB, sideC;

	cout << "please enter the length of side a: ";
	cin >> sideA;

	cout << "please enter the length of side b: ";
	cin >> sideB;

	sideC = sqrt((sideA * sideA) + (sideB * sideB));

	cout << "so side c has to be: " << sideC << "\n";

	return 0;
}
