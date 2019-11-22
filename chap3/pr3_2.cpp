#include <iostream>

using namespace std;

int main()
{
	char choice;

	do {
		cout << "Help on:\n";
		cout << "  1. if\n";
		cout << "  2. switch\n";
		cout << "  3. for\n";
		cout << "  4. while\n";
		cout << "  5. do-while\n";
		cout << "Choose one: ";
		cin >> choice;
	} while (choice < '1' || choice > '5');

	switch (choice) {
		case '1':
			cout << "The if:\n\n";
			cout << "if (condition) statement;\n";
			cout << "else statement;\n";
			break;
		case '2':
			cout << "The switch:\n\n";
			cout << "switch (expression) {\n";
			cout << "  case constant:\n";
			cout << "    statement sequence\n";
			cout << "    break;\n";
			cout << "  // ...\n";
			cout << "}\n";
			break;
		case '3':
			cout << "The for:\n\n";
			cout << "for (init; condition; increment)";
			cout << " statement;\n";
			break;
		case '4':
			cout << "The while:\n\n";
			cout << "while (condition) statement;\n";
			break;
		case '5':
			cout << "The do-while:\n\n";
			cout << "do {\n";
			cout << "  statement;\n";
			cout << "} while (condition);\n";
			break;
	}

	return 0;
}
