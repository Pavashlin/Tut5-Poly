#include "Circle.h"
#include <iostream>


Circle::Circle()
{
	radius = 0;
}
Circle::Circle(int r)
{
	radius = r;
}

Circle::~Circle()
{
}

void Circle::name()
{
	cout << "I am a Circle" << endl;
}

void Circle::perimeter()
{
	double perimeter;
	perimeter = 2 * (pi*radius);
	cout << "my perimeter is " << perimeter << endl;
}

void Circle::area()
{
	double area;
	area = pi*radius*radius;
	cout << "my area is " << area << endl;
}

void Circle::draw()
{
	cout << "look im a big circle! witness my circular brilliance" << endl;
}
