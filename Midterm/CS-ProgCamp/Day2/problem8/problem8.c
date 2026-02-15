/* input money in Bath and output the change in USD and EUR
1 USD = 30 Bath
1 EUR = 38 Bath
*/

#include <stdio.h>
int main(){
    float bath,usd,eur;
    scanf("%f", &bath);
    usd = bath / 35.00;
    eur = bath / 38.00;
    printf("%.2f\n%.2f", usd, eur);
}