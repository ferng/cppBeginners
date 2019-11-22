#include <iostream>
#include <fstream>
using namespace std;

int main (int argc, char *argv[])
{
	register int i;
	unsigned char buf1[1024], buf2[1024];
	if (argc != 3) {
		cout << "error: usage: compfiles <file1> <file2>\n";
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

	cout << "comparing files...\n";

	do {
		f1.read((char *) buf1, sizeof buf1);
		f2.read((char *) buf2, sizeof buf2);

		if (f1.gcount() != f2.gcount()) {
			cout << "files are of different sizes.\n";
			f1.close();
			f2.close();
			return 0;
		}

		for(i = 0; i < f1.gcount(); i++)
			if (buf1[i] != buf2[i]) {
				cout << "Files differ.\n";
				f1.close();
				f2.close();
				return 0;
			}
	} while(!f1.eof() && !f2.eof());

	cout << "files are the same.\n";

	f1.close();
	f2.close();

	return 0;
}
