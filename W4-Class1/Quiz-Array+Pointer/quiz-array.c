#include<stdio.h>

int main(){
    int x = 10, y = 0;
    int *ip;
    y = x*x;
    printf("x=%d\n",x);
    printf(" y =%d\n", y);
    printf(" Print x=%p\n", &x); //Print x=
    printf(" Print y =%p\n", &y); // Print y:

    ip = &y;
    printf("x=%d\n",x); //x=
    printf(" y=%d\n",y); //y =-
    printf(" Print ip =%p\n", ip ); // Print ip =
    printf(" Print *ip =%d\n", *ip); // Print *ip =

    y += x++; // คือการดำเนินการตามลำดับดังนี้ y = y + x;
    printf("x=%d\n", x); //x=
    printf(" y=%d\n", y); //y =-
    printf(" Print ip =%p\n", ip); // Print ip =
    printf(" Print *ip=%d\n\n", *ip); // Print *ip =

    *ip = y-x;
    ip =&x;
    printf("x=%d\n",x); //x =-
    printf(" y=%d\n", y); // y = -
    printf(" Print ip =%p\n", ip); // Print ip =
    printf(" Print *ip =%d\n\n", *ip); // Print *ip =
    return 0;
    
}