#include <iostream>
using namespace std;

namespace QueueSpace{
	
	const int maxQsize = 100;
	
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
}

