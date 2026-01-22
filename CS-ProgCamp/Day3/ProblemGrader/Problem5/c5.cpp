#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int  check =1;

    if (n<2) {
        cout << "not prime" << endl;
    }

    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) {
            check = 0;
            break;
        }
    }

    if (check) {
        cout << "prime" << endl;
    }
    else {
        cout << "not prime" << endl;
    }
    return 0;
}
