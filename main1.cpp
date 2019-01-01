#include<iostream>
#include<string>
#include "Student\Student.h"

using namespace std;
class Stu
{
    private:
        int num;
        int score;
    public:
        void setdata()
        {
            cin >> num;
            cin >> score;
        }
        void display()
        {
            cout << "num=" << num << endl;
            cout << "score=" << score << endl;
        }
};

int main()
{        
	Stu stu1, stu2;
    cout << "Hello world" << endl;
    int max(int a, int b);
    int x, y;
    cout << "ÇëÊäÈëxÓëyÖµ£º" << endl;
    cin >> x >> y;
    cout << max(x, y) << endl;
    stu1.setdata();
    stu2.setdata();
    stu1.display();
    stu2.display();
 //   Student st1(2);
//   st1.add(2.1, 3.2);
	return 0;
}	

int max(int a, int b)
{
    return a + b;  
}
