#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   float a,b,c,x,realP,imagP,x1,x2; //realP = realPart & imagP = imaginary Part
   float y;
   cout<<"Enter the values of a b & c: "<<endl;
   cin>>a>>b>>c;
   x = b*b - 4*a*c;
   y = sqrt(x);
   cout<<"The value of discriminant is: "<<x;
   if(x >= 0)
   {
       x1 = (-b + y)/(2*a);
       x2 = (-b - y)/(2*a);
       cout<<"Roots are real and different"<<endl;
       cout<<"Therefore the roots are: "<<x1<<" "<<x2;
   }
   if(x == 0)
   {
       cout<<"The two roots are real and same"<<endl;
       x1 = (-b + y)/(2*a);
       x2 = x1;
       cout<<"Therefore x1 and x2 equals: "<<x1<<endl;
   }


}
