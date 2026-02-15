#include<stdio.h>

int main()
{
    enum month{Jan=2,Feb,Mar=10,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov ,Dec};

    printf("%d ,%d, %d ,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", Jan, Feb, Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov ,Dec);
    return 0;
}