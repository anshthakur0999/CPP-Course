#include <iostream>
using namespace std;

int main(){

    int teaCups;
    cout << "Enter the Numbe of Tea Cups:";
    cin>>teaCups;

    if(teaCups>20){
        cout<<"Gold Badeg"<<endl;
    }
    else if(teaCups<=20){
        if(teaCups>=10){
            cout<<"Silver Badge"<<endl;
        }
        else{
            cout<<"No badge"<<endl;
        }
    }

    // if(teaCups>20){
    //     cout<<"Gold Badeg"<<endl;
    // }
    // else if(10<=teaCups && teaCups<=20){
    //     cout<<"Silver Badge"<<endl;
    // }
    // else{
    //     cout<<"No Badge"<<endl;
    // }

    return 0;
}