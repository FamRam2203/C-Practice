#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i;
    cout<<"Enter Quiz Marks: "<<endl;
    cin>>a;
    cout<<"Enter Exam Marks: "<<endl;
    cin>>b;
    cout<<"Enter Attendance Marks: "<<endl;
    cin>>c;
    cout<<"Enter Assignment Marks: "<<endl;
    cin>>d;
    e = a + b + c + d;
    cout<<"Total Marks Obtained: "<<e<<endl;
    f = e % 5;
    g = e - f;
    h = g + 5;
    i = h - e;
    cout<<"Total Marks Obtained Including Bonus: "<<h<<endl;
    cout<<"Total Bonus Given: "<<i<<endl;

}
