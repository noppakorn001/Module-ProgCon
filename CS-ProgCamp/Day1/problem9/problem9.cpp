/* user input password if match with "1234" print "Login Success"" */

#include <iostream>
using namespace std;

int main(){
    string password;

    cin >> password;
    if (password == "1234"){
        cout << "Access granted" << endl;
    }
    else{
        cout << "Invalid password" << endl;
    }
    return 0;
}