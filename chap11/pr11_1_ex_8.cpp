#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>
using namespace std;

int main (int argc, char *argv[])
{
	bool fCase=false, fPos=false;
	int argPos=1, posCount=0;
	register int i;
	unsigned char buf1[1024], buf2[1024];
	char curArg[30];
	if ((argc < 3) && (argc > 4)) {
		cout << "error: usage: compfiles [opt] <file1> <file2>\n";
		return 1;
	}

	strcpy(curArg, argv[argPos]);
	if (curArg[0] == '-'){
		argPos++;
		if (curArg[1] == 'i')
			fCase=true;
		else if (curArg[1] == 'p')
			fPos=true;
	}

	ifstream f1(argv[argPos++], ios::in | ios::binary);
	if (!f1) {
		cout << "error: cannot open first file.\n";
		return 1;
	}

	ifstream f2(argv[argPos++], ios::in | ios::binary);
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
			if (fPos)
				cout << "Mismatch at position " << posCount << endl;
			f1.close();
			f2.close();
			return 0;
		}

		for(i = 0; i < f1.gcount(); i++){
			if (fCase){
				buf1[i] = toupper(buf1[i]);
				buf2[i] = toupper(buf2[i]);
			}
				
			if (buf1[i] != buf2[i]) {
				cout << "Files differ.\n";
				if (fPos)
					cout << "Mismatch at position " << posCount << endl;
				f1.close();
				f2.close();
				return 0;
			}
			posCount++;
		}
	} while(!f1.eof() && !f2.eof());

	cout << "files are the same.\n";

	f1.close();
	f2.close();

	return 0;
}
