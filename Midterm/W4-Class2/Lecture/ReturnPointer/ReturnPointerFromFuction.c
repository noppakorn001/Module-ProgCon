#include <stdio.h>
int *getSum(int *, int *); // function that returns integer pointer

int main(void){
    int x =100;
    int y =200;

    int *sum = NULL; // Pointers Variable

    sum = getSum(&x, &y); // Address of x and y to fuction

    printf("Sum value: %d\n", *sum);
    return 0;
}

int *getSum(int *m, int *n){
    *m = *m + *n;
    return m;
}

// Result Sum value: 300