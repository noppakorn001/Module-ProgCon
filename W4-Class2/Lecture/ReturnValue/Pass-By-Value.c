/*
input variable , constant or expression
output constant
If the variables on the calling and using sides are the same, they are considered different variables.
*/ 

/*Passing by value : the value of the function parameter is copied into
another location of your memory

Accessing or modifying the variable within your function, only the copy is
accessed/modified and the original value is left untouched
*/

#include <stdio.h>
int increaseByOne(int);

//function declaration
void main(){
    int x =1;
    printf("main: value of x before call increaseByOne: %d\n\n",x );
    //function call, Have same type for input and output
    int xx = increaseByOne(x);
    printf("main: value of x after call increaseByOne: %d\n\n",x );
    printf("main: value xx after call function is %d \n",xx);

}


//function definition
int increaseByOne(int x){
    x= x+1;
    printf("func: value x before call increaseByOne: %d\n\n",x);
    return x;
}
