#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    int max = a;
    if (max<=a) {
        max = a;
    }
    if (max<=b){
        max = b;
    }
    if (max<=c){
        max = c;
    }

    cout << max << endl;
    return 0;
}