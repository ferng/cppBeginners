#include <iostream>
#include <fstream>
using namespace std;

int main (int argc, char *argv[])
{
	register int i;
	char ch;

	if (argc != 4) {
		cout << "error: usage: mergefiles <in_file1> <in_file2> <out_file>\n";
		return 1;
	}

	ifstream f1(argv[1], ios::in | ios::binary);
	if (!f1) {
		cout << "error: cannot open first file.\n";
		return 1;
	}

	ifstream f2(argv[2], ios::in | ios::binary);
	if (!f2) {
		cout << "error: cannot open second file.\n";
		return 1;
	}

	ofstream f3(argv[3], ios::out | ios::binary);
	if (!f3) {
		cout << "error: cannot open output file.\n";
		return 1;
	}

	cout << "merging files...\n";

	do {
		f1.get(ch);
		if (!f1.eof())
			f3.put(ch);
	} while(!f1.eof());

	do {
		f2.get(ch);
		if (!f2.eof())
			f3.put(ch);
	} while(!f2.eof());

	f1.close();
	f2.close();
	f3.close();

	return 0;
}
