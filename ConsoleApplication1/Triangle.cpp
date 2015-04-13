#include "Triangle.h"
#include <iostream>


Triangle::Triangle()
{
	Height = 0;
	Base = 0;
	Side = 0;
}

Triangle::Triangle(int x, int y, int z)
{
	Height = x;
	Base = y;
	Side = z;

}

Triangle::~Triangle()
{
}

void Triangle::name()
{
	cout << "I am a Triangle" << endl;
}

void Triangle::perimeter()
{
	double perimeter;
	perimeter = (2 * Side) + Base;
	cout << "my perimeter is " << perimeter << endl;
}

void Triangle::area()
{
	double area;
	area = (0.5*Base)*Height;
	cout << "my area is " << area << endl;
}

void Triangle::draw()
{
	cout << "look im a big triangle, witness my bermuda-like brilliance" << endl;
}

