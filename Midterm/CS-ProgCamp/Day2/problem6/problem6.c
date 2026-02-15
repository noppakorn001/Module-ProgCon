// input temperature in celsius and output in fahrenheit and kelvin (2demical point)
#include <stdio.h>
int main(){
    float c;
    scanf("%f", &c);
    float f = (c*9/5)+32;
    float k = c+273.15;
    printf("%.2f\n%.2f",f,k);
    return 0;
}