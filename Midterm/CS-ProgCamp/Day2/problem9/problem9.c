/*
ข้อ 9. ดอกเบี้ยทบต้น

รับเงินต้น, อัตราดอกเบี้ยต่อปี (ร้อยละ) และจำนวนปี แล้วคำนวณมูลค่าหลังจาก n ปี (compound interest)

Input
· เงินต้น P
· อัตราดอกเบี้ยต่อปี r (%)
· จำนวนปี n

Output

มูลค่าในอนาคตด้วยสูตร A
คำนวณมูลค่าในอนาคตด้วยสูตร A = P(1 + r/100)^(n)
*/

#include <stdio.h>
#include <math.h>
int main(){
    float p,r,n;
    scanf("%f %f %f", &p, &r, &n);
    float a = p*pow((1 + r/100),n);
    printf("%.2f", a);
    return 0;
}