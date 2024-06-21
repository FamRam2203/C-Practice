#include <iostream>
using namespace std;

void name(string FirstName,string LastName)
{
    cout<<FirstName<<" "<<LastName<<endl;
}

class Car
{
    public:
    string Color;
    void printname()
    {
        cout<<"Color is: "<<Color<<endl;
    }
};
int main()
{
    name("Fahim","Rahman");
    Car c1;
    c1.Color="Red";
    c1.printname();
}

