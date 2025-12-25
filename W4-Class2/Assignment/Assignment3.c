#include <stdio.h>
int funct2(char *pa, char *pb);
int main(){
    char a='X', b='Y';
    int i,j;
    i = funct2(&a,&b);
    printf("a=%c b=%c\n",a,b);
}

int funct2(char *c1, char *c2){
    *c1='P';
    *c2='Q';
    return ((*c1 == *c2)? *c1:*c2);
}

// result is a=P b=Q because Call By Reference makes changes to the original variables