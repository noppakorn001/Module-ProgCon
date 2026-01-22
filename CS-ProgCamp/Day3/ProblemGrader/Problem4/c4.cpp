#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a+b>c && a+c>b && b+c>a) {
        if (a==b && b==c) {
            cout << "equilatreal triangle" << endl;
        }
        else if (a==b || a==c || b==c) {
            cout << "isosceles triangle" << endl;
        }
        else {
            cout << "scalene triangle" << endl;
        }
    }
    else {
        cout << "not a triangle" << endl;
    }
}