#include <stdio.h>
#include <math.h>

int main() {
    int yB,yA;
    scanf("%d", &yB);
    yA = yB - 543;
    //printf("%d", yA);

    if (yA%4==0 && yA%100!=0){
        printf("Leap year");
    }
    else if(yA%400==0) {
        printf("Leap year");
    }
    else {
        printf("Not leap year");
    }

    return 0;
}