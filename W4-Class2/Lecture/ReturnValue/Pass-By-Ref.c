/*
The memory address of the variable (a pointer to the memory location) is passed
to the function

Call fuction use pointer to receieve address of variable

Process with pointer have affect on original variable that send to function
*/

#include <stdio.h>

void addOne(int*);
void main(){
    int x=1;
    printf("main: value x before call addOne: %d\n",x);
    addOne(&x);
    printf("main: value x after call addOne: %d\n",x);
}
void addOne(int* x){
    *x = *x+1;
    printf("add by One : %d\n",*x);
}