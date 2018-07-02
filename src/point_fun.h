#ifndef __POINT_FUN_H
#define __POINT_FUN_H

class point_fun
{
	private:
		Point p;

	public:
		Point PointMinus(Point p1, Point p2);
		double PointMult(Point p1, Point p2);
		void isPointonLine(Point p, Line l);
};

#endif
