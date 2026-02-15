#include <stdio.h>

int main() {
    typedef enum { A, B } Type;
    typedef union {
        float percent;
        char grade;
    } Result;
    
    typedef struct {
        char name[16];
        float score;
        Type type;
        Result result;

    } Student;

    printf("Size of Student: %ld bytes\n", sizeof(Student));
    
}
