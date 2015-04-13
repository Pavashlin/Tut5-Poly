#pragma once
#include "Shape.h"
#ifndef RECTANGLE_H
#define RECTANGLE_H

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
#endif

