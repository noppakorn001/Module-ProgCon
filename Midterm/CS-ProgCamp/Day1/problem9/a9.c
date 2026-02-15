#include <stdio.h>
#include <string.h>

int main() {
    int password;
    scanf("%d", &password);
    if (password==1234) {
        printf("Access granted");
    }
    else {
        printf("Invalid password");
    }
    return 0;
}