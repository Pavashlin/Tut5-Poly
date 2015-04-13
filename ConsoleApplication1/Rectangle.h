#pragma once
#include "Shape.h"
class Rectangle:public Shape
{
private:
	int Length;
	int Bredth;

public:
	void name();
	void perimeter();
	void area();
	void draw();
	Rectangle(int, int);
	Rectangle();
	~Rectangle();
};

