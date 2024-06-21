#include <iostream>
using namespace std;

int main()
{
    int x,y,z;

    cout<<"Enter the 1st result: "<<endl;
    cin>>x;
    cout<<"Enter the 2nd result: "<<endl;
    cin>>y;
    cout<<"Enter the 3rd result: "<<endl;
    cin>>z;

    int t1 = (x + y);
    int t2 = (y + z);
    int t3 = (x + z);
    if(x>z && y>z)
    {
        cout<<"The best 2 results are: "<<x<<" & "<<y<<endl;
        cout<<"Total quiz marks out of best 2 is: "<<t1<<endl;
    }
    if(y>x && z>x)
    {
        cout<<"The best 2 results are: "<<y<<" & "<<z<<endl;
        cout<<"Total quiz marks out of best 2 is: "<<t2<<endl;
    }
    if(x>y && z>y)
    {
        cout<<"The best 2 results are: "<<x<<" & "<<z<<endl;
        cout<<"Total quiz marks out of best 2 is: "<<t3<<endl;
    }
    return 0;
}
