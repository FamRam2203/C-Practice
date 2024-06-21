#include <iostream>
using namespace std;
int main()
{
    /*int n;

    cout<<"Enter number to be reversed: "<<endl;
    cin>>n;
     int r = n%10;
     int rn = (r*10) + (n/10);
    cout<<rn;
    */
    int n,r,rn=0;
    cout<<"Enter number to be reversed: "<<endl;
    cin>>n;
    while(n != 0)
    {
        r = n%10;
        rn = rn*10 + r;
        n /= 10;
    }
    cout<<"Reversed number is: "<<rn;
}
