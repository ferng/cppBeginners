#include <iostream>
#include "ex12_15_Queue.cpp"
using namespace std;
using namespace QueueSpace;

int main()
{
	Queue<int> iQa(10), iQb(10);

	iQa.put(1);
	iQa.put(2);
	iQa.put(3);

	iQb.put(10);
	iQb.put(20);
	iQb.put(30);

	cout << "Contents of integer queue iQa: ";
	for (int i=0; i < 3; i++)
		cout << iQa.get() << " ";
	cout << endl;

	cout << "Contents of integer queue iQb: ";
	for (int i=0; i < 3; i++)
		cout << iQb.get() << " ";
	cout << endl;

	Queue<double> dQa(10), dQb(10);

	dQa.put(1.01);
	dQa.put(2.02);
	dQa.put(3.03);

	dQb.put(10.01);
	dQb.put(20.02);
	dQb.put(30.03);

	cout << "Contents of double queue dQa: ";
	for (int i=0; i < 3; i++)
		cout << dQa.get() << " ";
	cout << endl;
	
	cout << "Contents of double queue dQb: ";
	for (int i=0; i < 3; i++)
		cout << dQb.get() << " ";
	cout << endl;

	return 0;
}
