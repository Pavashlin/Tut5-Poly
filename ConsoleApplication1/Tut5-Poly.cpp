// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include"Shape.h"
#include "Circle.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	Circle bob(5);
	Shape *shape1 = &bob;
	shape1->name();
	return 0;
}

