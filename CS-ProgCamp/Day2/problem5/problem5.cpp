// random number 1-100 and input number until it matches and out number of attempts
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int randomNum = (rand() % 100) + 1
    //cout << randomNum;
    int num;
    int attempts =0;
    while(num != randomNum) {
        cin >> num;
        attempts++;    
    }
    cout << attempts << endl;

    return 0;
}