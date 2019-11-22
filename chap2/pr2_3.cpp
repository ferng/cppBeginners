#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double principal, intRate, payPerYear, numYears, payment, numer, denom, b, e;
	double totalInt;

	cout << "Enter principal: ";
	cin >> principal;

	cout << "Enter interest rate (ie, 0.075): ";
	cin >> intRate;

	cout << "Enter number of payments per year: ";
	cin >> payPerYear;

	cout << "Enter number of years: ";
	cin >> numYears;

	numer = intRate * principal / payPerYear;
	e = -(payPerYear * numYears);
	b = (intRate / payPerYear) + 1;
	denom = 1 - pow(b, e);
	payment = numer / denom;
	totalInt = (payment * payPerYear * numYears) - principal;

	cout << "Payment is " << payment << "\n";
	cout << "And the total amount of interest paid will be " << totalInt << "\n";

	return 0;
}
