#include<iostream>
using namespace std;
int main(){

    int cupsOrdered;
    double pricePerCup=2.5,totalprice,discount;

    cout<<"Enter the no of cups ordered:";
    cin>>cupsOrdered;

    totalprice=pricePerCup*cupsOrdered;
    
    if(cupsOrdered>20){
        discount=0.20;
    }
    else if(cupsOrdered<=20 && cupsOrdered>=10){
        discount=0.10;
    }
    else{
        discount=0;
    }

    totalprice -= totalprice*discount;

    cout << "Total Price after discount:"<<totalprice<<endl;

    return 0;
}