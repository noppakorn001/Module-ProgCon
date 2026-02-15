#include <stdio.h>
int funct1(char a, char b);
int main(){
    char a = 'X';
    char b = 'Y';
    int i,j;
    i = funct1(a,b);
    printf("a=%c b=%c\n",a,b);

}

int funct1(char c1, char c2){
    c1='P';
    c2='Q';
    return ((c1<c2)? c1:c2);
}

// Result is a=X b=Y because Call By Value makes changes to the copy of the original variables