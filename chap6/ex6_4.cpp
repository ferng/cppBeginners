#include <iostream>
#include <cmath>

using namespace std;

void fRound(double &d);

int main()
{
	double val = 6.7;

	cout << "before rounding: " << val << endl;
	fRound(val);
	cout << "after rounding: " << val << endl;
	
	val = 107.87;
	cout << "before rounding: " << val << endl;
	fRound(val);
	cout << "after rounding: " << val << endl;

	return 0;
}

void fRound(double &d)
{
	double fracPart;

	fracPart = modf(d, &d);
	
	if (fracPart >= 0.5)
		d++;
}
