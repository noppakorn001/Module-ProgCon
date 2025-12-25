#include<stdio.h>
void cal_circle (float radius, float *area, float *circum) ;
void main (){
    float r = 10;
    float *ans1, *ans2;
    cal_circle(r, ans1, ans2);
    printf("Circle: r = %.2f has area = %.2f, circumference = %.2f\n", r, *ans1, *ans2) ;
}

void cal_circle (float radius, float *area, float *circum){
    float a, c;
    a = 3.14*radius*radius;
    c = 2*3.14*radius;
    *area = a;
    *circum = c;
}