#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int day;
    cin >> day;
    cout << day/7 << " weeks " << day%7 << " days";
    return 0;
}