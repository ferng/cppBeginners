#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char inStr[20];
	int i, ups=0;

	cout << "Please enter a string: ";
	cin >> inStr;

	for (i = 0; inStr[i]; i++)
		if (isupper(inStr[i]))
			ups++;

	cout << "We found " << ups << " upper case chars.\n";

	return 0;
}
