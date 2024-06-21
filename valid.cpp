#include <iostream>
using namespace std;
int main()
{
    string x;
    cout<<"Enter the value of x: "<<endl;
    cin>>x;
    if(x=="+" || x=="-" || x=="*" || x=="/" || x=="%")
    {
       cout<<x<<" is an arithmetic operator"<<endl;
    }

    if(x=="++" || x=="--")
    {
        cout<<x<<" is an increment/decrement operator"<<endl;
    }

    if(x=="=" || x=="+=" || x=="-=" || x=="*=" || x=="/=" || x=="%=")
    {
        cout<<x<<" is an assignment operator"<<endl;
    }

    if(x=="==" || x=="!=" || x=="<" || x==">" || x=="<=" || x==">=")
    {
        cout<<x<<" is an relational operator"<<endl;
    }

    if(x=="&&" || x=="||" || x=="!")
    {
        cout<<x<<" is a logical operator"<<endl;
    }

    if(x=="&" || x=="|" || x=="^" || x=="~")
    {
        cout<<x<<" is a bitwise operator"<<endl;
    }

    if(x== "sizeof" || x== "?:" || x== "&" || x== "." || x== "->" || x== "<<" || x== ">>")
    {
        cout<<x<<" is an other type of operator"<<endl;
    }
}
