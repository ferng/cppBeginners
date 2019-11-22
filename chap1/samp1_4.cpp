#include <iostream>
using namespace std;

int main()
{
	int ivar;
	double dvar;

	ivar = 100;
	dvar = 100.0;

	cout << "Value of ivar: " << ivar << "\n";
	cout << "Value of dvar: " << dvar << "\n";

	cout << "\n";

	ivar = ivar / 3;
	dvar = dvar / 3;

	cout << "Value of ivar: " << ivar << "\n";
	cout << "Value of dvar: " << dvar << "\n";

	return 0;
}
