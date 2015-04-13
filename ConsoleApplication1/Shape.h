#pragma once
#ifndef SHAPE_H
#define SHAPE_H
using namespace std;

class Shape
{
public:
	virtual void name() = 0;
	virtual void perimeter() = 0;
	virtual void area() = 0;
	virtual void draw() = 0;

	Shape();
	~Shape();
};



#endif