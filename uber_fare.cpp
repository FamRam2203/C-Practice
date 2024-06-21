#include <iostream>
using namespace std;

int main()
{
    double dis, time;
    double x = 15.00;
    double y = 0.50;
    double min_fare = 50.0;
    double base_fare = 25.0;
    cout<<"Enter the distance traveled: "<<endl;;
    cin>>dis;
    cout<<"Enter the time taken: "<<endl;
    cin>>time;
    double z = x * dis;
    double f = y * time;
    double total = z + f + base_fare;
    if(total <= min_fare)
        cout<<"Your total fare is: "<<min_fare<<endl;
    else
        cout<<"Your total fare is: "<<total<<endl;
    return 0;

}
