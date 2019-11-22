#include <iostream>

using namespace std;

int main()
{
	char c;
	int i=0;

	cin.unsetf(ios::skipws);

	cout << "Enter chars to change their case: \n";

	do {
		cin >> c;
		if ( c >= 65 && c <= 90 ) { 						// upper case
			cout << (char)(c + 32);
			i++;
		}
		else if ( c >= 97 && c <= 122 ) {			// lower case
			cout << (char)(c - 32);
			i++;
		}
		else
			cout << c; 
	} while (c != '.');

	cout << "\nSo that was the string with " << i << " changes.\n";

	return 0;
}
