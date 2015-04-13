#pragma once
#include "Shape.h"
class Triangle :public Shape
{
private:
	int Height;
	int Base;
	int Side;
public:
	void name();
	void perimeter();
	void area();
	void draw();
	Triangle();
	Triangle(int, int, int);
	~Triangle();
};

