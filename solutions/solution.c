#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create a linked list from an array of integers
struct Node* createLinkedList(int arr[], int n) {
    struct Node* head = createNode(arr[0]);
    struct Node* temp = head;
    for (int i = 1; i < n; i++) {
        temp->next = createNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

// Function to get the count of nodes
int getCount(struct Node* head) {
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}
