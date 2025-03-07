#include <iostream>
#include <string>
using namespace std;
int main(){

    int cupCounts;
    bool status;
    cout<< "How many cups had you brought:"<<endl;
    cin>>cupCounts;
    cout << "Are you a student (1 for yes 0 for no):"<<endl;
    cin>>status;
    if(status == true  || cupCounts>15){
        cout<<"You are eligible for discount"<<endl;
    }
    else{
        cout <<"You are not eligible"<<endl;
    }


    return 0;
}