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

	cout << "*****Rectangle*****" << endl;
	Rectangle Jim()
	return 0;
}

