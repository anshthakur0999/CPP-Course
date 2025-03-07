/*While loop*/
#include <iostream>
using namespace std;

int main(){

    int teacups;
    cout<<"Enter teacups to be Served:"<<endl;
    cin>>teacups;

    while(teacups>0){
        teacups--;
        cout<<"Tea is Served\n"<<teacups<<" remaining"<<endl;
    }

    return 0;
}