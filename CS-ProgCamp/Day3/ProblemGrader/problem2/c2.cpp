#include <iostream>
#include <math.h>
using namespace std; 

int main() {
    int n;
    int r=0;
    cin >> n;
    int o=n;

    while(n != 0) {
        r = r * 10 + n % 10;
        n = n / 10;
    }
    if (r==o) {
        cout << "palidrome" << endl;
    }
    else {
        cout << "not palidrome" << endl;
    }

    //cout << r << endl;
    return 0;

}