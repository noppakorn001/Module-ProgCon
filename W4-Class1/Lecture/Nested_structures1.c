/* 
    Nested structures are structures that are defined inside another structure.
*/

#include <stdio.h>

int main() {

    // main structure
    struct student {
        char name[30];
        int age;
        // nested structure
        struct address {
            int house_no;
            char district[20];
        } add;
    }std;

    printf("Enter name: ");
    scanf("%s", std.name);
    printf("Enter age: ");
    // have & because age is an integer and scanf needs an address
    scanf("%d", &std.age);

    printf("Enter house number: ");

    // enter to nested structure using pointer
    scanf("%d", &std.add.house_no);
    printf("Enter district: ");
    scanf("%s", std.add.district);

    printf("Name: %s\n", std.name);
    printf("Age: %d\n", std.age);
    printf("House number: %d\n", std.add.house_no);
    printf("District: %s\n", std.add.district);
    
    return 0;
}