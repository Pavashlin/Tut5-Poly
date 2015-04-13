// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include"Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

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

	cout << "*****Triangle*****" << endl;									//testing Triangle
	Triangle Theodore(5,3,2);
	Shape *shape3 = &Theodore;
	shape3->name();
	shape3->perimeter();
	shape3->area();
	shape3->draw();


	Triangle a(1, 2, 3), b(4, 5, 6), c(7, 8, 9);						//added array with objects
	Circle d(3);
	Rectangle e(4, 5);

	Shape *shapearray[5];
	shapearray[0] = &a;
	shapearray[1] = &b;
	shapearray[2] = &c;
	shapearray[3] = &d;
	shapearray[4] = &e;

	for (int i = 0; i < 5; i++)											// illustrates polymorphic behavior
	{
		shapearray[i]->name();
		shapearray[i]->perimeter();
		shapearray[i]->area();
		shapearray[i]->draw();
		cout << endl;
	}

	return 0;

}

