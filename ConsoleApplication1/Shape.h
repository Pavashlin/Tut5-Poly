#pragma once
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

