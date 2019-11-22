#include <iostream>
#include <cmath>

using namespace std;

class fTriangle {
	double base, height;
public:
	fTriangle(int x, int y) {
		base = x;
		height = y;
	}
	double hypot() {
		return sqrt( (base * base) + (height * height) );
	}
	double area() {
		return ( (base * height) / 2);
	}
};

int main()
{
	fTriangle fT(3, 4);

	cout << "the hypotenuse is: " << fT.hypot() << endl;
	cout << "the area is: " << fT.area() << endl;
}
