#include <iostream>
using namespace std;

int main()
{
string x;
cout<<"Type a word: "<<endl;
getline(cin, x);
if(x=="if" || x=="else" || x=="else if" || x=="asm" || x=="double" || x=="new" || x=="switch" || x=="auto"  || x=="operator" || x=="template" || x=="break"
   || x=="enum"  || x=="private" || x=="this" || x=="extern" || x=="protect" || x=="throw" || x=="catch" || x=="float" || x=="public" || x=="try" ||
   x=="char" || x=="for" || x=="register" || x=="typedef" || x=="class" || x=="friend" || x=="return" || x=="union" || x=="const" || x=="goto" || x=="short"
   || x=="unsigned" || x=="continue" || x=="signed" || x=="virtual" || x=="default" || x=="inline" || x=="sizeof" || x=="void" || x=="delete" || x=="int" ||
   x=="static" || x=="volatile" || x=="do" || x=="long" || x=="struct" || x=="while")
{
    cout<<x<<" is a keyword!"<<endl;
}
else if(x=="0" || x=="1" || x=="2" || x=="3" || x=="4" || x=="5" || x=="6" || x=="7" || x=="8" || x=="9")
{
    cout<<x<<" is an integer keyword!"<<endl;
}
else
    cout<<x<<" is not a keyword!"<<endl;

    return 0;
}
