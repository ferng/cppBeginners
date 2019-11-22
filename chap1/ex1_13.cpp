#include <iostream>
using namespace std;

int main()
{
	double earth;
	int count=0;

	for (earth = 1.0; earth <= 100; earth++){
		cout << earth << " pounds weigh " << earth*0.17 << " pounds on the moon.\n";

		if (count == 25){
			cout << "\n";
			count =0;
		}
	}

	return 0;
}
