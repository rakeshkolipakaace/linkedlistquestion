#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Node {
    int data;
    struct Node* next;
};

int getCount(struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) { 
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* createLinkedList(int arr[], int n) {
    if (n == 0) return NULL;

    struct Node* head = createNode(arr[0]);
    struct Node* tail = head;

    for (int i = 1; i < n; i++) {
        tail->next = createNode(arr[i]);
        tail = tail->next;
    }

    return head;
}
