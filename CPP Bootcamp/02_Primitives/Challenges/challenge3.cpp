#include <iostream>
#include <string>
using namespace std;
int main(){

    string fvrtTea;
    int teaCups;
    cout<<"Please enter your favourite tea:\n";
    getline(cin,fvrtTea);
    cout <<"How many cups of tea you need:\n";
    cin>>teaCups;
    cout<<"Here is your "<<teaCups<< "  cups of favourite "<<fvrtTea<<endl;

    return 0;
}