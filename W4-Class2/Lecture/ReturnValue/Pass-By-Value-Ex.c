// write f(x,y) = (x*2)+y and x=5 y=3

#include <stdio.h>
int f(int x, int y){
    return (x*2)+y;
}

void main(){
    int x = 5;
    int y = 3;
    printf("z = %d\n",f(x,y));
}