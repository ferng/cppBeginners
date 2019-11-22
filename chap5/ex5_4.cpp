#include <iostream>

using namespace std;

int myStrLen(char *str);

int main()
{
	char tmpStr[40];

	cout << "enter a string please: ";
	cin >> tmpStr;

	cout << "the lentgh of the string is: " << myStrLen(tmpStr) << "\n";

	return 0;
}

int myStrLen(char *str)
{
	int i=0;

	while (*(str+i))
		i++;

	return i;
}
