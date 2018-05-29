#include<iostream>
#include "src/point.h"
#include "src/line.h"

using namespace std;

int main()
{
/*	Point p11 = {10.0, 15.0},	
		  p12 = {20.0, 20.0},
		  p21 = {10.0, 20.0},
	      p22 = {20.0, 10.0};
	
	stline l1 = {p11, p12};
	stline l2 = {p21, p22};
*/	
//	line_cross(l1, l2);

	//int is_cross = ab_cross_cd(p11, p12, p21, p22);
	//type_cross(is_cross);
	
	Point p1(10.0, 20.0), p2(15.0, 10.0);
	Line l1(p1, p2);
	l1.showLine();
	cout << "x:" << p1.getX() << endl;
	cout << "y:" << p1.getY() << endl;

	cout << "I am dj!" << endl;
	return 0;
}
