#include <iostream>
#include "line.h"
#include "point.h"

using namespace std;

Line::Line(Point sp, Point ep)
{
	this->start_p = sp;
	this->end_p = ep;
}

void Line::showLine()
{
	cout << "X:";
	this->start_p.showPoint();
	cout << "Y:";
	this->end_p.showPoint();
}

