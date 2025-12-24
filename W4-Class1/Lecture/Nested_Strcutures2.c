#include <stdio.h>

int main() {

    struct address {
        int house_no;
        char district[20];
    }add;

    struct student {
        char name[30];
        int age;
        struct address add;
    }std;

    printf("Enter name: ");
    scanf("%s", std.name);
    printf("Enter age: ");
    scanf("%d", &std.age);
    printf("Enter house number: ");
    scanf("%d", &std.add.house_no);
    printf("Enter district: ");
    scanf("%s", std.add.district);

    printf("Name: %s\n", std.name);
    printf("Age: %d\n", std.age);
    printf("House number: %d\n", std.add.house_no);
    printf("District: %s\n", std.add.district);
    
    return 0;
}