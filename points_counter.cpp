#include <iostream>
using namespace std;

int main()
{
    int x,n,m,p;
    cout<<"Enter a point: "<<endl;
    cin>>x;
    n = (x%10);
     m = (x-n)/10;
     if(n<=5)
        {
            p = m;
        }
     else{
        p = m + (n/n);
     }

    cout<<"Total Points Earned are: "<<p<<endl;
    return 0;
}
