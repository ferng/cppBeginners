#include <iostream>
using namespace std;

void show_binary(unsigned int u);

int main()
{
	unsigned int val = 0xFFFF;

	cout << "Value in binary:\t";
	show_binary(val);

	return 0;
}

void show_binary(unsigned int u)
{
	unsigned int t;

	for(t = 32768; t > 0; t = t / 2)
		if (u & t)
			cout << '1';
		else
			cout << '0';

	cout << endl;
}
