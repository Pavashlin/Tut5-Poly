#include "Rectangle.h"
#include <iostream>


Rectangle::Rectangle()
{
	Length = 0;
	Bredth = 0;
}


Rectangle::~Rectangle()
{
}

void Rectangle::name()
{
	cout << "I am a Rectangle" << endl;
}

void Rectangle::perimeter()
{
	double perimeter;
	perimeter = (2*Length) + (2*Bredth);
	cout << "my perimeter is " << perimeter << endl;
}

void Rectangle::area()
{
	double area;
	area = Length*Bredth;
	cout << "my area is " << area << endl;
}

void Rectangle::draw()
{
	cout << "look im a big rectangle, witness my 90 degree brilliance" << endl;
}
