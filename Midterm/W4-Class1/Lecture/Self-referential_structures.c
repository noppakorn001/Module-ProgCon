#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    struct student {
        char name[10];
        struct student *nextstd;
    };

    typedef struct student std;

    std *start, *next, *new_node, *current; // add current pointer
    
    // create node Jin
    start = (std *)malloc(sizeof(std));
    strcpy(start->name, "Jin");
    start->nextstd = NULL;

    // create node Jane
    new_node = (std *)malloc(sizeof(std));
    strcpy(new_node->name, "Jane");
    new_node->nextstd = NULL;
    start->nextstd = new_node; // connect Jin -> Jane
    next = new_node;           // save Jane in next

    // create node John
    new_node = (std *)malloc(sizeof(std));
    strcpy(new_node->name, "John");
    new_node->nextstd = NULL;
    next->nextstd = new_node; // connect Jane -> John

    // show original list
    printf("Original List: \t");
    current = start; // use current to run instead of start to keep the head position
    while (current != NULL) {
        printf("%s \t", current->name);
        current = current->nextstd;
    }

    printf("\n");

    // insert node Jo after Jin
    new_node = (std *)malloc(sizeof(std));
    strcpy(new_node->name, "Jo");
    new_node->nextstd = NULL;

    current = start; // start from head
    while (current != NULL) {
        if (strcmp(current->name, "Jin") == 0) {
            new_node->nextstd = current->nextstd; // connect Jo to the node after Jin
            current->nextstd = new_node;          // connect Jin to Jo
            break;
        }
        current = current->nextstd;
    }

    // show list after insert
    printf("\nAfter Insert: \t");
    current = start; // start from head
    while (current != NULL) {
        printf("%s \t", current->name);
        current = current->nextstd;
    }

    printf("\n");


    //remove node Jo
    current = start; // start from head
    while (current != NULL) {
        if (strcmp(current->name, "Jo") == 0) {
            current->nextstd = current->nextstd->nextstd; // connect Jin to John
            break;
        }
        current = current->nextstd;
    }

    // show list after remove
    printf("\nAfter Remove: \t");
    current = start; // start from head
    while (current != NULL) {
        printf("%s \t", current->name);
        current = current->nextstd;
    }
    return 0;
}