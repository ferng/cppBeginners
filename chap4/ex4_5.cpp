#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char in[21], str1[21], str2[21];
	int i;

	cout << "Please enter a string: ";
	cin >> in;
	for (i = 0; in[i]; i++)
		str1[i] = toupper(in[i]);
	str1[i] = '\0';

	cout << "And another one please Carol: ";
	cin >> in;
	for (i = 0; in[i]; i++)
		str2[i] = toupper(in[i]);
	str2[i] = '\0';

	if (!strcmp(str1,str2))
		cout << "Yes they're the same.\n";
	else
		cout << "Nah, I couldn't match them.\n";

	return 0;
}
