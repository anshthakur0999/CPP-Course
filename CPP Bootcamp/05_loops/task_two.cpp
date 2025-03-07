/*DO while LOOP*/


#include <iostream>
#include <string>

using namespace std;

int main(){

    string response;
    
    do
    {
        cout << "Do you want to continue? (yes/no): ";
        cin >> response;
        
    } while (response != "no");
    

    return 0;
}