#include <iostream>

using namespace std;

void println(bool b,int ident=0), println(int i), println(long i);
void println(char ch), println(char *str), println(double d);

void print(bool b), print(int i), print(long i);
void print(char ch), print(char *str), print(double d);

int main()
{
	println(true);
	println(true,7);
	println(10);
	println("This is a test");
	println('x');
	println(99L);
	println(123.23);

	print("Here are some values: ");
	print(false);
	print(' ');
	print(88);
	print(' ');
	print(100000L);
	print(' ');
	print(100.01);

	println(" Done!");

	return 0;
}

void println(bool b, int ident)
{
	for (;ident; ident--)
		cout << ' ';
	if (b)
		cout << "true\n";
	else
		cout << "false\n";
}

void println(int i)
{
	cout << i << "\n";
}

void println(long i)
{
	cout << i << "\n";
}

void println(char ch)
{
	cout << ch << "\n";
}

void println(char *str)
{
	cout << str << "\n";
}

void println(double d)
{
	cout << d << "\n";
}

void print(bool b)
{
	if (b)
		cout << "true";
	else
		cout << "false";
}

void print(int i)
{
	cout << i;
}

void print(long i)
{
	cout << i;
}

void print(char ch)
{
	cout << ch;
}

void print(char *str)
{
	cout << str;
}

void print(double d)
{
	cout << d;
}
