#include <iostream>
using namespace std;

int main()
{
	cout << "start\n";
	try {
		cout << "inside try block\n";
		throw 99;
		cout << "this will not execute\n";
	}
	catch(int i) {
		cout << "caught an exception!!! it is: ";
		cout << i << "\n";
	}

	cout << "end\n";

	return 0;
}
