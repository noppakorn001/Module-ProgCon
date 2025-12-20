// input weigh and height and output BMI (2decimal point) and rule BMI
/*
BMI < 18.5 -> Underweight
18.5 ≤ BMI < 23.0 -> Normal
23.0 ≤ BMI < 25.0 -> Overweight
BMI ≥ 25.0 -> Obese
*/
#include <stdio.h>
int main(){
    float w,h;
    scanf("%f %f",&w,&h);
    float bmi = w/(h*h);
    printf("%.2f",bmi);
    if (bmi<18.5){
        printf(" Underweight");
    }
    else if (bmi>=18.5 && bmi<23){
        printf(" Normal");
    }
    else if (bmi>=23 && bmi<25){
        printf(" Overweight");
    }
    else {
        printf(" Obese");
    }
    return 0;
}