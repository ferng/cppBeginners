#include <iostream>
using namespace std;

const int maxQsize = 100;

class Queue {
	char q[maxQsize];
	int size;
	int putloc, getloc;
public:
	Queue(int len) {
		if (len > maxQsize)
			len = maxQsize;
		else if (len <= 0)
			len = 1;

		size = len;
		putloc = getloc = 0;
	}

	void put(char ch) {
		if (putloc == size) {
			cout << "--Queue is full.\n";
			return;
		}

		putloc++;
		q[putloc] = ch;
	}

	char get() {
		if (getloc == putloc) {
			cout << "--Queue is empty.\n";
			return 0;
		}

		getloc++;
		return q[getloc];
	}

};

int main() {
	Queue bigQ(100);
	Queue smallQ(4);

	char ch;
	int i;

	cout << "Using bigQ to store the alphabet.\n";
	for (i=0; i<26; i++)
		bigQ.put('A'+i);

	cout << "Contents of bigQ: ";
	for (i=0; i<26; i++){
		ch=bigQ.get();
		if (ch!=0)
			cout << ch;
	}

	cout << "\n\n";

	cout << "Using smallQ to generate errors.\n";
	for (i=0; i<5; i++) {
		cout << "Attempting to store " << (char)('Z'-i);
		smallQ.put('Z'-i);
		cout << endl;
	}

	cout << endl;

	cout << "Contents of smallQ: ";
	for (i=0; i<5; i++) {
		ch=smallQ.get();
		if (ch!=0)
			cout << ch;
	}

	cout << endl;
}
		

