#include <iostream>
using namespace std;

int main(){
    int yearBE,  yearAD;
    //cout << "Enter year BE: ";
    cin >> yearBE;
    yearAD = yearBE -543;

    // condition1: Divisible by 4 but not divisible by 100.
    if (yearAD %4 == 0 && yearAD %100 != 0){
        cout << "Leap year" << endl;
    }
    // condition2: Divisible by 400
    else if(yearAD %400 == 0){
        cout << "Leap year" << endl;
    }
    // condition3: Not leap year
    else{
        cout << "Not leap year" << endl;
    }
    return 0;
}

