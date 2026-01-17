#include <iostream>
using namespace std;

int main() {
    int n,a;
    int max = -99999;
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> a;
        if (a>max) {
            max=a;
        }
    }
    cout << max;
    return 0;
}