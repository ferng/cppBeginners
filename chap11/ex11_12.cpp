#include <iostream>
#include <fstream>
using namespace std;

int main (int argc, char *argv[])
{
	register int i;
	char ch;

	if (argc != 3) {
		cout << "error: usage: copyfile <in_file1> <out_file2>\n";
		return 1;
	}

	ifstream f1(argv[1], ios::in | ios::binary);
	if (!f1) {
		cout << "error: cannot open first file.\n";
		return 1;
	}

	ofstream f2(argv[2], ios::out | ios::binary);
	if (!f2) {
		cout << "error: cannot open second file.\n";
		return 1;
	}

	cout << "copying files...\n";

	do {
		f1.get(ch);
		if (!f1.eof())
			f2.put(ch);
	} while(!f1.eof());

	f1.close();
	f2.close();

	return 0;
}
