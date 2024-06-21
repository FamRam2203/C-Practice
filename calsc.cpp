#include <iostream>
using namespace std;
int main()
{
    int i,j,l,t=0;
    int str[30];
    cout<<"Provide the input: "<<endl;
    cin>>str;
    l = str.length();
    for(i=0;i<l;i++)
    {
        if(str[i]=='(')
        {
            t++;
        }
        else if(str[i]==')')
        {
            t--;
        }
        else if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/')
        {
            if(str[i-1]>96 && str[i-1]<123 && str[i+1]>96 && str[i+1]<123)
            {
            continue;
            }

            else
            {
              break;
            }
        }
    }
     if(i == l && t==0)
    {
        cout<<"Input is valid"<<endl;
    }

    else
    {
        cout<<"Input is invalid"<<endl;
    }
}
