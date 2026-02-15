#include<stdio.h>

int main(){
    int var1 = 10; int *ptr;
    //printf ("%dn",var1);
    //printf ("%p\n",&var1);
    ptr=&var1;
    printf ("%p\n",ptr);
    //printf ("%d",*ptr);
    return 0;
}