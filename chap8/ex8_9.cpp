#include <iostream>
using namespace std;

class Help {
	int uId;
public:
	Help(int x) {
		uId = x;
	}
	void helpOn(char what);
	void showMenu();
	int getId() {
		return uId;
	}
	bool isValid(char ch);
	~Help() {
		cout << "Almost done now, the last bit: the user ID " << uId << endl;
	}
};

int main()
{
	char choice;
	Help hlpOb(23);

	cout << "So it's you is it number " << hlpOb.getId() << " here we go" << endl;

	for (;;) {
		do {
			hlpOb.showMenu();
			cin >> choice;
		} while(!hlpOb.isValid(choice));

		if (choice == 'q')
			break;

		cout << "\n";
		hlpOb.helpOn(choice);
	}

	return 0;
}

void Help::helpOn(char what)
{
	switch(what) {
		case '1':
			cout << "The if:\n\n";
			cout << "if(condition) statement;\n";
			cout << "else statement;\n";
			break;
		case '2':
			cout << "The switch:\n\n";
			cout << "switch(expression) {\n";
			cout << "  case constant:\n";
			cout << "    statement sequence\n;";
			cout << "    break;\n";
			cout << "  // ...\n";
			cout << "}\n";
			break;
		case '3':
			cout << "The for:\n\n";
			cout << "for(init; condition; increment)";
			cout << "  statement;\n";
			break;
		case '4':
			cout << "The while:\n\n";
			cout << "while(condition) statement;\n";
			break;
	}
	cout << "\n";
}

void Help::showMenu()
{
	cout << "Help on:\n";
	cout << "1. if\n";
	cout << "2. switch\n";
	cout << "3. for\n";
	cout << "4. while\n";
	cout << "Choose one (q to quit): ";
}

bool Help::isValid(char ch)
{
	if((ch < '1' || ch > '4') && ch != 'q')
		return false;
	else
		return true;
}
