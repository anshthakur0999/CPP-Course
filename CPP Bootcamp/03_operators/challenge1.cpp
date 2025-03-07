/*Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost. */

#include<iostream>
using namespace std;
int main(){

    int teaPacks;
    float pricePerPack,totalPrice;

    cout << "Enter the number of packs you want:";
    cin>>teaPacks;

    cout << "Enter the price per pack:";
    cin>>pricePerPack;

    totalPrice = teaPacks * pricePerPack;

    //total price after tax
    totalPrice += totalPrice*0.1;

    cout<<"Final Cost:"<<totalPrice<<endl;



    return 0;
}