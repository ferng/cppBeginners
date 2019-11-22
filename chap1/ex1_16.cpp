#include <iostream>
using namespace std;

int main()
{
	double input=0, total=0;
	int i;

	for (i = 0; i < 5; i++) {
		cout << "Please enter a number: ";
		cin >> input;

		total = total + input;
	}

	cout << "The average is: " << total/5 << "\n";

	return 0;
}
