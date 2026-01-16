#include <stdio.h>
#include <math.h>

int main() {
    float temp;
    scanf("%f", &temp);
    if (temp > 37.5) {
        printf("Fever");
    }
    else {
        printf("Normal");
    }
    return 0;
}