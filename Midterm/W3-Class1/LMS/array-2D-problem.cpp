/* 6810210158 Noppakorn Wunnoy*/

#include <iostream>
using namespace std;

int main(){
    float score[10][3];
    int i =0;
    while(true){
        cout << "Student " << i+1 << endl;
        for (int j = 0; j<3;j++){
            cout << "Exam " << j+1 << " : ";
            cin >> score[i][j];
        }
        //cout << "Average score : " << (score[i][0]+score[i][1]+score[i][2])/3 << endl;
        i++;    cout << "Enter data of next Student (y/n) : ";
        char ch;
        cin >> ch;

        while (ch != 'y' && ch != 'n'){
            cout << "Enter data of next Student (y/n) : ";
            cin >> ch;
        }

        if (ch == 'n'){
            for (int k = 0; k < i; k++){ 
                float sum = score[k][0] + score[k][1] + score[k][2];
                float avg = sum / 3.0;
                cout << "Average score of student " << k+1 << " : " << avg << endl;
            }
            break;
        }

        if (ch == 'y'){
            continue;
        }

    }
    return 0;
}