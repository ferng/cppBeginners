#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
	char storedPw[] = "passWord";

	if (argc != 2)
		cerr << "error: usage: a.out <passw>\n";
	else if (!strcmp(storedPw, argv[1]))
		cout << "well done they match!!\n";
	else
		cerr << "error: password mismatch\n";

	return 0;
}
