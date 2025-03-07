#include <iostream>
using namespace std;
int main (){

    double teaPrice;
    cout << "Enter tea base price:";
    cin >>teaPrice;

    teaPrice = teaPrice + (teaPrice*0.1);
    int roundedPrice = (int) teaPrice;
    cout << "Rounded Tea Price:" <<roundedPrice <<endl;



    return 0;
}