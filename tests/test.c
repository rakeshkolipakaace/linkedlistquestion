#include <stdio.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};

// Function declarations (from solution.c)
extern struct Node* createNode(int data);
extern struct Node* createLinkedList(int arr[], int n);
extern int getCount(struct Node* head);

bool runTest(int arr[], int n, int expected) {
    struct Node* head = createLinkedList(arr, n);
    int result = getCount(head);
    return result == expected;
}

int main() {
    bool allPassed = true;

    allPassed &= runTest((int[]){1, 2, 3, 4, 5}, 5, 5);
    allPassed &= runTest((int[]){2, 4, 6, 7, 5, 1, 0}, 7, 7);
    allPassed &= runTest((int[]){10}, 1, 1);
    allPassed &= runTest((int[]){5, 15, 25, 35, 45, 55}, 6, 6);
    allPassed &= runTest((int[]){1000, 999, 998}, 3, 3);
    allPassed &= runTest((int[]){103}, 1, 1);

    if (allPassed) {
        printf("🎉 All test cases passed!\n");
    } else {
        printf("❌ Some test cases failed!\n");
    }

    return 0;
}
