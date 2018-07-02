#include <iostream>
#include <stdio.h>
#include <math.h>
#include "point.h"
#include "line.h"
#include "point_fun.h"

using namespace std;

Point point_fun::PointMinus(Point p1, Point p2)
{
	double x = p1.x - p2.x;
	double y = p1.y - p2.y;
	return Point(x, y);
}

double point_fun::PointMult(Point p1, Point p2)
{
	return p1.x * p2.y - p1.y * p2.x;
}

void point_fun::isPointonLine(Point p, Line l)
{
	double pl = PointMult(PointMinus(p, l.start_p), (PointMinus(l.end_p, l.start_p)));
	cout << pl << endl;
	if(pl == 0.0)
	{
		cout << "点在直线上" << endl;
		if((min(l.start_p.x, l.end_p.x) <= p.x)
			&& (max(l.start_p.x, l.end_p.x) >= p.x)
			&& (min(l.start_p.y, l.end_p.y) <= p.y)
			&& (max(l.start_p.y, l.end_p.y) >= p.y))
			{
				cout << "点在线段上" << endl;
			}  
																						else{
				cout << "点不在线段上" << endl;												}
																						}else{
				cout << "点不在直线上" << endl;										}		
}
