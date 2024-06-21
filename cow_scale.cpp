#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    y = 450;

    cout<<"Enter the weight of the cow: "<<endl;
    cin>>x;
    z = x * y;
    cout<<"The weight of the cow is: "<<x<<"kg"<<endl;
    cout<<"Price per kg is: "<<y<<"tk"<<endl;
    cout<<"Total price of the cow is:"<<z<<"tk"<<endl;

    return 0;
}
