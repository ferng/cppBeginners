#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int num;
	double sqRoot;

	for (num = 1; num < 100; num++) {
		sqRoot = sqrt((double) num);
		cout << num << " " << sqRoot << '\n';
	}

	return 0;
}
