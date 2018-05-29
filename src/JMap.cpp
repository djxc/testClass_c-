#include <GL/freeglut.h>  
#include "JMap.h"
#include <iostream>

using namespace std;

JMap::JMap()
{
}

void JMap::dj()
{
	cout << "dj" << endl;
}

void helloOpengl(void)
{  
		glClearColor(1.0, 1.0, 0.6, 1.0);  //改变默认背景有颜色为浅黄色，要写在glLoadIdentity()前  
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);  
		glLoadIdentity();  


		glBegin(GL_TRIANGLES);  
		{  
			//  glColor3f(0.0f, 1.0f, 0.0f);  
			glVertex2f(0.0, 0.3);  
			//  glColor3f(1.0f, 0.0f, 0.0f);  
			glVertex2f(-0.3, -0.3);  
			//  glColor3f(0.0f, 0.0f, 1.0f);  
			glVertex2f(0.3, -0.3);  
		}  
		glEnd();  

		glTranslated(0.3, 0.3, 0);  
		glColor3f(1.0f, 0.0f, 1.0f);  
		glBegin(GL_QUADS);                           
		{  
			glVertex3f(-0.2f, 0.2f, 0.0f);                 
			glVertex3f(0.2f, 0.2f, 0.0f);                    
			glVertex3f(0.2f, -0.2f, 0.0f);                     
			glVertex3f(-0.2f, -0.2f, 0.0f);                      
		}  
		glEnd();  

		glutSwapBuffers();  
}  

//画线
void draw_line(float lineSize)
{
	glLineWidth(lineSize);       //设置线的粗细, 为浮点型.要在开始线段之前设置   
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.0f, 1.0f);
    glEnd();
}

//画点,给定点的大小
void draw_point(float size)
{
	glColor3f(1.0f, 1.0f, 0.0f);
	glPointSize(size);
	glBegin(GL_POINTS);
	{
		glVertex3f(0.2f, 0.2f, 0.0f);		//浮点数为百分比                       
	}
	glEnd();
}

void myMap()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);  //改变默认背景有颜色为浅黄色，要写在glLoadIdentity()前  
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);  
	glLoadIdentity(); 
	
	draw_point(10.0);
	draw_line(3.0);
	
	glutSwapBuffers();		//画完图形之后要运行此函数,否则不显示图像.刷新并交换缓存

}

void JMap::show(int argc, char *argv[]) 
{  
	glutInit(&argc, argv);  
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);  
	glutInitWindowPosition(100, 100);  
	glutInitWindowSize(640, 640);  
	glutCreateWindow("HelloTriangle");  
	glutDisplayFunc(myMap);  
	//glutDisplayFunc(helloOpengl);  
	glutMainLoop();  
}
