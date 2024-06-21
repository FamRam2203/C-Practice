#include <iostream>
using namespace std;

int main(){
    int cw,mw,rate,price;
    //rate=500;
    cout<<"Enter cow weight: ";
    cin>>cw;
    if(cw<=300){
        mw = cw*0.65;
    }
    else if(cw>=300 && cw<=500){
        mw = cw*0.60;
    }
    else{
        mw = cw*0.55;
    }
    cout<<"Meat weight will be: "<<mw<<"kg"<<endl;
    if(cw<=300){
        rate=500;
    }
    else if(cw>=300 && cw<=500){
        rate = 530;
    }
    else{
        rate = 560;
    }
    price=(mw*rate) + 1000;
    cout<<"The total price will be: "<<price<<"tk"<<endl;
    return 0;

}
