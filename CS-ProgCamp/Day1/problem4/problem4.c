#include <stdio.h>

int main(){
    float score1,score2,score3;
    scanf("%f %f %f", &score1, &score2, &score3);
    printf("Average = %.2f\n", (score1 + score2 + score3) / 3);
    return 0;
}