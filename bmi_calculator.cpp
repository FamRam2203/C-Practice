#include <iostream>
using namespace std;

int main()
{
    double height, weight;

    cout<<"Enter your weight(in kilograms): "<<endl;
    cin>>weight;
    cout<<"Enter your height(in meters): "<<endl;
    cin>>height;

    double x = height * height;
    double bmi = weight / x;
    cout<<"Your body mass index(bmi) is: "<<bmi<<endl;
    return 0;
}
