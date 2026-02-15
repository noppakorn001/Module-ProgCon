/* input name and score from 5 students in array and calculate the average score */
/* show name for student who score higher than average score */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char name[5][100];
    float score[5];
    float sum = 0;
    for (int i=0;i<5;i++){
        scanf("%s %f",name[i],&score[i]);
        sum += score[i];
    }
    float avg = sum/5;
    printf("Average: %.2f\n", avg);

    for (int i=0;i<5;i++){
        if (score[i]>avg){
            printf("%s\n", name[i]);
        }
    }
    return 0;
}