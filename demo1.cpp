#include<iostream>
#include<cmath>
using namespace std;

void JieFun();
int main()    
{     
    cout << "Hello world, I am dj" << endl;
    return 0;
}

//��һԪ���η���
void JieFun()
{
    float a, b, c, x1, x2;
    cout << "������һԪ���η��̵�a�� b�� c��ֵ:" << endl;
    cin >> a >> b >> c;
    if ((b*b - 4*a*c) < 0)
    {
        cout << "û����������" << endl;
    }else
    {
        x1 = (-b + sqrt(b*b - 4*a*c))/(2*a); 
        x2 = (-b - sqrt(b*b - 4*a*c))/(2*a); 
        cout << x1 << "; " << x2 << endl;
    }  
}
