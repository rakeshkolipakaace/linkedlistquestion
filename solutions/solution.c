// solutions/solution.c

#include <stdlib.h>

// Definition of a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to calculate the length of the linked list2
int getLength(struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}
