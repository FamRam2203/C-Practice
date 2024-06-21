#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout<<"Enter a number: "<<endl;
    cin>>x;
    y = (x/2) + 1;
    z = ((x-1)/2)+1;
    if(x%2==0)
    {
        cout<<"The number of seats needed for majority: "<<y<<endl;
    }
    else{
        cout<<"The number of seats needed for majority: "<<z<<endl;
    }

}
