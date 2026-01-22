#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int reverse = 0;
    int temp = n;
    
    // find sum of digit
    while(temp>0) {
        int digit = temp % 10;
        sum += digit;
        reverse = reverse*10 + digit;
        temp /= 10;
    }
    cout << sum << endl;
    cout << reverse << endl;
    return 0;
}