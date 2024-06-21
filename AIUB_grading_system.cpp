#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter your marks: "<<endl;
    cin>>x;
    if(x<50)
    {
        cout<<"Sorry you could not pass please retake this course"<<endl;

    }
    if(x>50 && x<60)
    {
        cout<<"D Grade"<<endl;
    }
    if(x>60 && x<65)
    {
        cout<<"D+ Grade"<<endl;
    }
    if(x>65 && x<70)
    {
        cout<<"C Grade"<<endl;
    }
    if(x>70 && x<75)
    {
        cout<<"C+ Grade"<<endl;
    }
    if(x>75 && x<80)
    {
        cout<<"B Grade"<<endl;
    }
    if(x>80 && x<85)
    {
        cout<<"B+ Grade"<<endl;
    }
    if(x>85 && x<90)
    {
        cout<<"A Grade"<<endl;
    }
    if(x>90 && x<=100)
    {
        cout<<"A+ Grade"<<endl;
    }

}
