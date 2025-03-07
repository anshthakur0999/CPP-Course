/*A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discount based on their input.*/

#include <iostream>
using namespace std;
int main(){

    int cups;
    bool membership;
    cout<<"How many Cups had you brought:";
    cin>>cups;

    cout<<"Had you been the member for more than a year (1 for yes 0 for no)";
    cin>>membership;

    if(membership == true || cups>=12){
        cout<<"Eligible for discount"<<endl;
    }
    else{
        cout<<"Not eligible for discount"<<endl;
    }



    return 0;
}
