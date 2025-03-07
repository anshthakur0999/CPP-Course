#include <iostream>
using namespace std;

int main(){

    int teaBags;
    cout << "Enter the Numbe of Tea Bags:";
    cin>>teaBags;

    if(teaBags<10){
        teaBags+=5;
    }
    cout<< "Total Number of teabags:"<<teaBags<<endl;

    return 0;
}