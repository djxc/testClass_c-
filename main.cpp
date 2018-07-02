#include<iostream>
#include "src/point.h"
#include "src/line.h"
#include "src/point_fun.h"
#include "src/JMap.h"

using namespace std;

int main(int argc, char *argv[])
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
	JMap map;
	map.dj();
	Point p1(10.0, 20.0), p2(15.0, 10.0), p3(13.0, 10.0), p4(20.0, 20.0),
	p5(15.0, 20.0);
	Line l1(p1, p4);
	
	//对于点几何的操作
	point_fun pf;
	double pm = pf.PointMult(p1, p4);
	cout << pm << endl;
	pf.isPointonLine(p5, l1);	//判断点是否在线段上

	l1.showLine();
	int type = l1.isLine_cross(p3, p4);
	l1.type_cross(type);
	cout << "x:" << p1.getX() << endl;
	cout << "y:" << p1.getY() << endl;

	cout << "I am dj!" << endl;
	map.show(argc, argv);
	
	return 0;
}
