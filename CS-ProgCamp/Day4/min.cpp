#include <iostream>
using namespace std;

int main() {
    int n,a,minv;
    cin >> n;
    cin >> a;
    minv = a;
    for(int i=2;i<=n;i++) {
        cin >> a;
        if(a<minv) minv=a;
    }
    cout << minv;
    return 0;
}