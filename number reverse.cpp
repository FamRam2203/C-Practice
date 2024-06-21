#include <iostream>
using namespace std;
int main()
{
    int x, y, z, u;
    cout<<"Enter a two digit number: "<<endl;
    cin>>x;
    y = x % 10;
    z = 10 * y;
    u = z + ((x-y)/10);
    cout<<u;
}
