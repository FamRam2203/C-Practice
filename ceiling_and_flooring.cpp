#include <iostream>
using namespace std;

int main()
{

    int x,y,z,t;
    cout<<"This is a ceiling and flooring converter"<<endl;
    cout<<"Enter a decimal number: "<<endl;
    cin>>x;
    y = x % 1;
    z = x - y;
    t = z + 1;
    cout<<"The number after ceiling is: "<<t<<endl;
    cout<<"The number after flooring is: "<<z<<endl;
    return 0;

}
