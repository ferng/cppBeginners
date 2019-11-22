#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int i, j;
	bool prime;

	cout << "The prime numbers between 1 and 100 are:\n";

	for (i = 1; i <= 100; i++) {
		prime = true;
		for (j = i-1; j > 1; j--) {
			if (!(i%j))
				prime = false;
		}
		if (prime == true)
			cout << i << ", ";
	}
	cout << "\n";

	return 0;
}
			
			
			
