/*
Write the statements to initialize a student. The student is Jane and 18
years old. The house number is 3 at Songkla
*/

#include <stdio.h>
#include <string.h>

int main() {

    struct student {
        char name[30];
        int age;
        struct address {
            int house_no;
            char district[20];
        } add;
    }std;

    strcpy(std.name, "Jane");
    std.age = 18;
    std.add.house_no = 3;
    strcpy(std.add.district, "Songkla");

    printf("Name: %s\n", std.name);
    printf("Age: %d\n", std.age);
    printf("House number: %d\n", std.add.house_no);
    printf("District: %s\n", std.add.district);

    return 0;
}