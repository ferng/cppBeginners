#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char str[80];

	cout << "Enter a string: ";
	//cin >> str;
	gets(str);
	cout << "Here is your string: " << str;
}
