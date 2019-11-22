#include <iostream>

using namespace std;

int &fSwap(int &x, int &y);

int main()
{
	int i=30, j=20;

	cout << "values of i and j: " << i << " " << j << endl;
	cout << "the smallest value is: " << fSwap(i, j) << endl;
	cout << "values of i and j: " << i << " " << j << endl;

	return 0;
}

int &fSwap(int &x, int &y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;

	if (x <= y)
		return x;
	else 
		return y;
}
