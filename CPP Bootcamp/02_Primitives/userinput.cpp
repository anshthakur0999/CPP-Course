#include<iostream>
#include<string>

using namespace std;

int main(){

    string userTea;
    int teaQuantity;

    cout<< "What would you like to order: \n";
    cin>>userTea;
    //getline(cin,userTea);

    cout<< "how many cups of "<<userTea <<"would you like \n";
    cin>>teaQuantity;
    //getline(cin,teaQuantity);

    cout<<teaQuantity<<" "<<userTea<<endl;
    


    return 0;
}