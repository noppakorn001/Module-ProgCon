#include <stdio.h>

int main() {

    union uPoint{
        int x;
        float y;
    };

    typedef union uPoint up;
    up p1;

    printf("Size of union: %d\n", sizeof(up));  

    struct sPoint{
        int x;
        float y;
    };

    typedef struct sPoint sp;
    sp p2;

    printf("Size of struct: %d\n", sizeof(sp));

    /*
    result:
    Size of union: 4
    Size of struct: 8
    */
    
    return 0;
}
