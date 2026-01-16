#include <stdio.h>
#include <math.h>

int main() {
    int score;
    scanf("%d", &score);
    if (score >= 80) {
        printf("Grade A");
    }
    else if (score<=79 && score>=70) {
        printf("Grade B");
    }
    else if (score<=69 && score>=60) {
        printf("Grade C");
    }
    else if (score<=59 && score>=50) {
        printf("Grade D");
    }
    else if (score<50) {
        printf("Grade F");
    }

    return 0;
}