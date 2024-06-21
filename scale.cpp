#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"The market price is 440 tk per kg"<<endl;
    cout<<"Please enter the amount you would like to purchase: "<<endl;
    cin>>x;
    double y = (x * 440)/1000;
    cout<<"Your price for "<<x<<" gram is: "<<y<<"  taka"<<endl;
}
