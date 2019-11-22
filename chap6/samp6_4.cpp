#include <iostream>

using namespace std;

void f(double &i);

int main()
{
	double val = 1;

	cout << "value: " << val << endl;

	f(val);

	cout << "value: " << val << endl;

	return 0;
}

void f(double &i)
{
	i = 10;
}
