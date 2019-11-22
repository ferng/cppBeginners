#include <iostream>

using namespace std;

class Vehicle
{
	int passengers;
	int fuelCap;
	int mpg;
public:
	Vehicle(int p, int f, int m)
	{
		passengers=p;
		fuelCap=f;
		mpg=m;
	}

	int range()
	{
		return mpg*fuelCap;
	}

	int getPassengers()
	{
		return passengers;
	}

	int getFuelCap()
	{
		return fuelCap;
	}

	int getMpg()
	{
		return mpg;
	}
};


class Truck : public Vehicle
{
	int cargoCap;
public:
	Truck(int p, int f, int m, int c) : Vehicle(p, f, m)
	{
		cargoCap=c;
	}

	int getCargoCap()
	{
		return cargoCap;
	}
};


int main()
{
	Truck semi(2, 200, 7, 44000);
	Truck pickup(3, 28, 15, 2000);
	int dist=252;

	cout << "Semi can carry " << semi.getCargoCap() << " pounds.\n";
	cout << "it has a range of " << semi.range() << " miles.\n";
	cout << "to go " << dist << " miles, the semi needs " <<
					dist/semi.getMpg() << " gallons of fuel.\n";

	cout << "Pickup can carry " << pickup.getCargoCap() << " pounds.\n";
	cout << "it has a range of " << pickup.range() << " miles.\n";
	cout << "to go " << dist << " miles, the pickup needs " <<
					dist/pickup.getMpg() << " gallons of fuel.\n";

	return 0;
}

