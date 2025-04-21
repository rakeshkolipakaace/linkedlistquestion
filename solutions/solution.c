#include <stddef.h>  // for NULL
#include <stdlib.h>  // for malloc

// Definition for singly-linked list node.
struct Node {
    int data;
    struct Node* next;
};

// Function to get the count of nodes
int getCount(struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}
