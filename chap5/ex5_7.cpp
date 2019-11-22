#include <iostream>

using namespace std;

int byThrees();
int threes;

void reset();

int main()
{
	reset();
	cout << byThrees() << " ";
	cout << byThrees() << " ";
	cout << byThrees() << " ";
	cout << byThrees() << " " << "\n";

	reset();
	cout << byThrees() << " ";
	cout << byThrees() << " ";
	cout << byThrees() << " ";
	cout << byThrees() << " ";
	cout << byThrees() << " ";
	cout << byThrees() << " ";
	cout << byThrees() << " " << "\n";

	return 0;
}

int byThrees()
{
	return threes += 3;
}

void reset()
{
	threes = -3;
}
