#include <iostream>
using namespace std;

int main() {
    int n;         
    float a, avg;
    float sum = 0;  

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> a;
        sum = sum + a;
    }
    cout << "Sum: " << sum << endl;
    avg = sum / n;
    cout << "Avg: " << avg << endl;

    return 0;
}