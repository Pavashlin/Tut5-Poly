#pragma once
#include "Shape.h"
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle :public Shape
{
	private:
		int radius;
	public:
		void name();
		void perimeter();
		void area();
		void draw();
		Circle();
		Circle(int);
		~Circle();


};
#endif

