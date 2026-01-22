#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], sum[2][2];
    int i,j;
    // input matrix 1
    for (i=0;i<2;i++) {
        for (j=0;j<2;j++) {
            cin >> a[i][j] ;
        }
    }

    // input matrix 2
    for (i=0;i<2;i++) {
        for (j=0;j<2;j++) {
            cin >> b[i][j];
        }
    }

    // sum
    for (i=0;i<2;i++) {
        for (j=0;j<2;j++) {
            sum[i][j] = a[i][j]+b[i][j];
        }
    }

    // output
    for (i=0;i<2;i++) {
        for (j=0;j<2;j++) {
            cout << sum[i][j] << " " ;
        }
        cout << endl;
    }
    
}