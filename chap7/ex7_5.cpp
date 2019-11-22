#include <iostream>
using namespace std;

int counter();

int main()
{
	int i;

	for (i = 0; i < 10; i++){
		cout << counter() << ' ';
		cout << counter() << ' ';
	}

	cout << endl;

	return 0;
}

int counter()
{
	static int calls = 0;
	return ++calls;
}
