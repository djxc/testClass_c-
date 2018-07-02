#ifndef __LINE_H_
#define __LINE_H_

#include "point.h"

class Point;

class Line
{
	public:
		Point start_p, end_p;

	public:
		Line(Point sp,Point ed);
		void showLine();
		int isLine_cross(Point p21, Point p22);
		void type_cross(int type);
};

#endif 
