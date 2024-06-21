#include <iostream>
using namespace std;
int main()
{
    string x;
    cout<<"Enter expression: "<<endl;
    cin>>x;
    if(x=="abc")
    {
        cout<<"The given expression matches: abc"<<endl;
    }
    else if(x=="abc*")
    {
        cout<<"The given expression matches: ab/abc/abcc/abccc/abcccc/abccccc/......"<<endl;
    }
    else if(x=="abc+")
    {
        cout<<"The given expression matches: abc/abcc/abccc/abcccc/abccccc/.........."<<endl;
    }
    else if(x=="a(bc)+")
    {
        cout<<"The given expression matches: abc/abcbc/abcbcbc/abcbcbcbc/abcbcbcbcbc/........"<<endl;
    }
    else
    {
        cout<<"You have given a false expression"<<endl;
    }
    return 0;
}
