#ifndef __LINE_H_
#define __LINE_H_

#include "point.h"

class Point;

class Line
{
	private:
		Point start_p, end_p;

	public:
		Line(Point sp,Point ed);
		void showLine();
};

#endif 
