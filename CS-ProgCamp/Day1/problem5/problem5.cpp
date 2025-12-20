/* input day and convert to weeek and day */

#include <iostream>
using namespace std;

int main(){
    int day;
    //cout << "Enter day: ";
    cin >> day;
    cout << day / 7 << " weeks " << day % 7 << " days" << endl;

    return 0;
}