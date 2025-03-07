#include <iostream>
using namespace std;
int main(){

    int cups;
    double pricePerCups, totalPrice, discountedPrice;

    cout << "Enter the Number of Tea Cups:";
    cin>>cups;

    cout << "Enter Price per cups:";
    cin>>pricePerCups;

    totalPrice = cups*pricePerCups;

    if(totalPrice>100){
        discountedPrice = totalPrice -(totalPrice * 0.05);
        cout <<"Discounted Price is : "<<discountedPrice;
    }
    else{
        cout << "Total Price is : "<<totalPrice;
    }
    


  
    return 0;
}