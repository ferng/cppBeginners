#include <iostream>

using namespace std;

void adder(int num);

int main()
{
	cout << "we'll print 1 through to 10:\n";
	adder(1);
	cout << "\n";
}

void adder(int num)
{
	cout << num << ", ";

	if (num < 10)
		adder (num+1);
}
