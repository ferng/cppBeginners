#include <iostream>
#include <new>
using namespace std;

const int maxQsize = 100;


class Sample {
	int id;
public:
	Sample() { id = 0; }
	Sample(int x) { id = x; }
	void show() { cout << id << endl; }
};


template <class Qtype> class Queue
{
	Qtype q[maxQsize];
	int size;
	int putloc, getloc;

public:
	Queue(int len)
	{
		if (len > maxQsize)
			len = maxQsize;
		else if (len <= 0)
			len = 1;

		size = len;
		putloc = getloc = 0;
	}

	void put(Qtype data)
	{
		if (putloc == size) {
			cout << "-- Queue is full.\n";
			return;
		}

		putloc++;
		q[putloc] = data;
	}

	Qtype get()
	{
		if (getloc == putloc) {
			cout << "-- Queue is empty.\n";
			return 0;
		}

		getloc++;
		return q[getloc];
	}
};


template <> class Queue<Sample>
{
	Sample *pS;
	int size;
	int putloc, getloc;

public:
	Queue(int len)
	{
		if (len > maxQsize)
			len = maxQsize;
		else if (len <= 0)
			len = 1;

		pS = new Sample[maxQsize];

		size = len;
		putloc = getloc = 0;
	}

	~Queue()
	{
		cout << "-- Deleting Sample Queue\n";
		delete pS;
	}

	void put(Sample data)
	{
		if (putloc == size) {
			cout << "-- Sample queue is full.\n";
			return;
		}

		putloc++;
		pS[putloc] = data;
	}

	Sample get()
	{
		if (getloc == putloc) {
			cout << "-- Sample queue is empty.\n";
			return 0;
		}

		cout << "-- Getting from Sample queue.\n";
		getloc++;
		return pS[getloc];
	}
};


int main()
{
	Sample tmp;
	Queue<Sample> sQa(3);
	sQa.put(1);
	sQa.put(2);
	sQa.put(3);
	cout << "Contents of Sample queue sQa:\n";
	for (int i=0; i < 3; i++)
		sQa.get().show();
	cout << endl;

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
