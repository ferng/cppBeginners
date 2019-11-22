#include <iostream>
using namespace std;

const int maxSize=100;


class Set {
	int len;
	char members[maxSize];

	int find(char ch);

public:
	Set() { len=0; }
	int geLength() { return len; }
	void showSet();
	bool isMember(char ch);

	bool operator <(Set ob2);
	bool operator >(Set ob2);
	Set operator +(char ch);
	Set operator -(char ch);
	Set operator +(Set ob2);
	Set operator -(Set ob2);
};


int Set::find(char ch)
{
	int i;

	for (i=0; i<len; i++)
		if (members[i]==ch)
			return i;

	return -1;
}


void Set::showSet()
{
	int i;

	cout << "{ ";
	for (i=0; i<len; i++)
		cout << members[i] << " ";

	cout << " }\n";
}


bool Set::isMember(char ch)
{
	if (find(ch)!=-1)
		return true;

	return false;
}


bool Set::operator <(Set ob2)
{
	int i;

	for (i=0; i<len; i++){
		if (ob2.isMember(members[i])==false)
			return false;
			}

	return true;
}


bool Set::operator >(Set ob2)
{
	int i;

	for (i=0; i<ob2.len; i++)
		if (isMember(ob2.members[i])==false)
			return false;

	return true;
}


Set Set::operator +(char ch)
{
	Set newSet;

	if (len==maxSize) {
		cout << "Set is full.\n";
		return *this;
	}

	newSet=*this;

	if (find(ch)==-1) {
		newSet.members[newSet.len]=ch;
		newSet.len++;
	}

	return newSet;
}


Set Set::operator -(char ch)
{
	Set newSet;
	int i=find(ch), j;

	for (j=0; j<len; j++)
		if(j!=i)
			newSet=newSet+members[j];

	return newSet;
}


Set Set::operator +(Set ob2)
{
	Set newSet=*this;
	int i;

	for (i=0; i<ob2.len; i++)
		newSet=newSet+ob2.members[i];
	
	return newSet;
}


Set Set::operator -(Set ob2)
{
	Set newSet=*this;
	int i;

	for (i=0; i<ob2.len; i++)
		newSet=newSet-ob2.members[i];

	return newSet;
}

int main()
{
	Set s1, s2, s3;

	s1=s1+'A';
	s1=s1+'B';
	s1=s1+'C';
	cout << "s1: ";
	s1.showSet();
	cout << endl;

	cout << "Testing for membership\n";
	if(s1.isMember('B'))
		cout << "B is a member of s1.\n";
	else
		cout << "B is not a member of s1.\n";

	cout << "Testing for membership\n";
	if(s1.isMember('T'))
		cout << "T is a member of s1.\n";
	else
		cout << "T is not a member of s1.\n";
	cout << endl;

	cout << "fern: ";
	s1.showSet();
	s1=s1-'B';
	cout << "s1: ";
	s1.showSet();

	s1=s1-'A';
	cout << "s1: ";
	s1.showSet();

	s1=s1-'C';
	cout << "s1: ";
	s1.showSet();
	cout << endl;

	s1=s1+'A';
	s1=s1+'B';
	s1=s1+'C';
	cout << "s1: ";
	s1.showSet();
	cout << endl;

	s2=s2+'A';
	s2=s2+'X';
	s2=s2+'W';
	cout << "s2: ";
	s2.showSet();
	cout << endl;

	s3=s1+s2;
	cout << "s3: ";
	s3.showSet();
	
	s3=s3-s1;
	cout << "s3: ";
	s3.showSet();
	cout << endl;
	
	s2=s2-s2;
	cout << "s2: ";
	s2.showSet();
	cout << endl;

	s2=s2+'C';
	s2=s2+'B';
	s2=s2+'A';
	cout << "s2: ";
	s2.showSet();
	cout << endl;

	s1=s1-s1;
	s2=s2-s2;
	s1=s1+'A';
	s1=s1+'B';
	s1=s1+'C';
	s1=s1+'D';
	s1=s1+'E';
	s2=s2+'B';
	s2=s2+'C';
	s2=s2+'D';
	cout << "s1: ";
	s1.showSet();
	cout << endl;
	cout << "s2: ";
	s2.showSet();
	cout << endl;
	if (s1>s2==true)
		cout << "s1 is a super-set of s2.\n";
	if (s2<s1==true)
		cout << "s2 is a sub-set of s1.\n";
}
