#ifndef __POINT_H_
#define __POINT_H_

class Point
{
	private:
		double x, y;

	public:
		Point(double x, double y);
		Point();
		double getX();
		double getY();
		void showPoint();
};


#endif
