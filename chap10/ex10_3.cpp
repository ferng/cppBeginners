#include <iostream>
#include <cstring>

using namespace std;


class TwoDShape
{
	double width, height;
	char name[20];

public:
	TwoDShape()
	{
		width = height = 0.0;
		strcpy(name, "unknown");
	}

	TwoDShape(double w, double h, char *n)
	{
		width = w;
		height = h;
		strcpy(name, n);
	}

	TwoDShape(double x, char *n)
	{
		width = height = x;
		strcpy(name, n);
	}

	void showDim()
	{
		cout << "Width and height are " << width << " and " << height << endl;
	}

	double getWidth()
	{
		return width;
	}

	double getHeight()
	{
		return height;
	}

	double setWidth(double w)
	{
		width = w;
	}

	double setHeight(double h)
	{	
		height = h;
	}

	char *getName()
	{
		return name;
	}

	virtual double area() = 0;
};


class Triangle : public TwoDShape
{
	char style[20];

public:
	Triangle()
	{
		strcpy(style, "unknown");
	}

	Triangle(char *str, double w, double h) : TwoDShape(w, h, "triangle")
	{
		strcpy(style, str);
	}

	Triangle(double x) : TwoDShape(x, "triangle")
	{
		strcpy(style, "isosceles");
	}

	double area()
	{
		return getWidth() * getHeight() / 2;
	}

	void ShowStyle()
	{
		cout << "Triangle is " << style << endl;
	}
};


class Circle : public TwoDShape
{
	double rad;
public:
	Circle(double r) : TwoDShape(r, "circle")
	{
		rad = r;
	}

	double area()
	{
		return (rad * rad) * 3.1416;
	}
};


class Rectangle : public TwoDShape
{
public:
	Rectangle(double w, double h) : TwoDShape(w, h, "rectangle")
	{
	}

	Rectangle(double x) : TwoDShape(x, "rectangle")
	{
	}

	bool isSquare()
	{
		if (getWidth() == getHeight())
			return true;
		else
			return false;
	}

	double area()
	{
		return getWidth() * getHeight();
	}
};


int main()
{
	int i;

	TwoDShape *shapes[5];

	shapes[0] = &Triangle("right", 8.0, 12.0);
	shapes[1] = &Rectangle(10);
	shapes[2] = &Rectangle(10, 4);
	shapes[3] = &Triangle(7.0);
	shapes[4] = &Circle(5.0);

	for (i=0; i<5; i++) {
		cout << "object is " << shapes[i]->getName() << endl;
		cout << "area is " << shapes[i]->area() << endl;
		cout << endl;
	}

	return 0;
}
