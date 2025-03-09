#include<iostream>
using namespace std;

int checkTemperature(int t){
    return t;
}

void serveChai(int cups);

int main(){

    // cout<<checkTemperature(76)<<endl;
    serveChai(7);

    return 0;
}

void serveChai(int cups){
    cout<<"Chai to be Served:"<<cups;
}