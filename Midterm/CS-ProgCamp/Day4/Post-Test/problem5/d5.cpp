#include <iostream>
using namespace std;

int main() {
    int n;
    float avg;
    cin >> n;
    float a[n];
    float sum=0;
    for (int i=0;i<n;i++) {
        cin >> a[i];
        sum += a[i];
    }
    avg = sum/n;
    for (int i=0;i<n;i++) {
        if (a[i]>avg) {
            cout << a[i] << " ";
        }
    }
    return 0;
}