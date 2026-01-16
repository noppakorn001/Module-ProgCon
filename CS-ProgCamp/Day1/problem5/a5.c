#include <stdio.h>
#include <math.h>

int main() {
    int day;
    scanf("%d", &day);
    printf("%d weeks", day / 7);
    printf(" %d days", day % 7);
    return 0;
}