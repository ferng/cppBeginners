#include <iostream>

using namespace std;

int main()
{
	char c;
	int i=0;

	cout << "Enter as many chars as you like, terminate with $:\n";

	do {
		cin >> c;

		if (c == '.')
			i++;
	} while (c != '$');

	cout << "Well, well, there were " << i << " periods!\n";

	return 0;
}
