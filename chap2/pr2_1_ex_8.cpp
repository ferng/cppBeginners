#include <iostream>
using namespace std;

int main()
{
	double distance, lightspeed, delay, delayInMin;

	distance = 34000000.0;
	lightspeed = 186000.0;

	cout << "In a bidirectional conversation the delay would increase every "
				<< "time the next party spoke, so it depends on the lnegth of the "
				<< "conversation.\n"
				<< "If you're asking how long it would take for the info to reach "
				<< "mars and come back, then these are the figures:\n\n";

	delay = distance / lightspeed;
	cout << "The delay is: " << delay*2 << " seconds.\n";

	delayInMin = delay / 60.0;
	cout << "The delay is: " << delayInMin*2 << " minutes.\n";

	return 0;
}
