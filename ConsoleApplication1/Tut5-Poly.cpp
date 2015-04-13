// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include"Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "*****Circle*****" << endl;									//testing circle
	Circle bob(5);
	Shape *shape1 = &bob;
	shape1->name();
	shape1->perimeter();
	shape1->area();
	shape1->draw();

	cout << "*****Rectangle*****" << endl;								//testing rectangle
	Rectangle Jim(4, 5);
	Shape *shape2 = &Jim;
	shape2->name();
	shape2->perimeter();
	shape2->area();
	shape2->draw();
	return 0;
}

