#include <iostream>
using namespace std;

int main()
{
    int base_fare = 20,minimum_fare = 50,total_fare,rate_per_min = 5,rate_per_km = 10,distance,time,tips,option,grand_fare1,grand_fare2;

    cout<<"Enter your distance: "<<endl;
    cin>>distance;
    cout<<"Enter your time: "<<endl;
    cin>>time;
    total_fare=base_fare+(rate_per_km*distance)+(rate_per_min*time);
    if(total_fare <= 50)
    {
        cout<<"Total fare is: 50 taka"<<endl;
    }
    else if(total_fare>50)
    {
        cout<<"Total fare is: "<<total_fare<<endl;
    }
    cout<<"Would you like to pay any tips? Press 1 for yes and zero for no..."<<endl;
    cin>>option;

    if(option == 0)
    {
        cout<<"Your final payable fare is: "<<total_fare<<endl;
    }
    else if(option == 1 && total_fare<=50)
    {
        cout<<"Enter tip amount:  "<<endl;
        cin>>tips;
        grand_fare1 = (minimum_fare + tips);
        cout<<"Your final payable fare is: "<<grand_fare1<<endl;
    }
    else if(option == 1 && total_fare>50)
    {
        cout<<"Enter tip amount:  "<<endl;
        cin>>tips;
        grand_fare2 = (total_fare + tips);
        cout<<"Your final payable fare is: "<<grand_fare2<<endl;
    }
    return 0;
}
