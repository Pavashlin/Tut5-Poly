#pragma once
#include<iostream>
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

class circle :public Shape
{
private:
	int radius;
public:
	void name();
	void perimeter();
	void area();
	void draw();
	circle();
	circle(int);
	~circle();
};

