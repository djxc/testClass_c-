#include<iostream>
#include<cmath>
using namespace std;

void JieFun();
int main()    
{     
    cout << "Hello world, I am dj" << endl;
    return 0;
}

//解一元二次方程
void JieFun()
{
    float a, b, c, x1, x2;
    cout << "请输入一元二次方程的a， b， c数值:" << endl;
    cin >> a >> b >> c;
    if ((b*b - 4*a*c) < 0)
    {
        cout << "没有有理数解" << endl;
    }else
    {
        x1 = (-b + sqrt(b*b - 4*a*c))/(2*a); 
        x2 = (-b - sqrt(b*b - 4*a*c))/(2*a); 
        cout << x1 << "; " << x2 << endl;
    }  
}
