// tests/test.c

#include <stdio.h>
#include <stdlib.h>
#include "../solutions/solution.c"  // Include the solution file

// Helper function to create a linked list with n nodes
struct Node* createList(int n) {
    if (n <= 0) return NULL;

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = NULL;

    struct Node* current = head;
    for (int i = 2; i <= n; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = NULL;
        current->next = newNode;
        current = newNode;
    }
    return head;
}

// Free memory allocated to linked list
void freeList(struct Node* head) {
    while (head) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
}

// Run a single test case
int runTest(int testNumber, int nodes, int expected) {
    struct Node* head = createList(nodes);
    int result = getLength(head);
    int passed = result == expected;

    if (passed) {
        printf("✅ Test Case %d Passed: Expected = %d, Got = %d\n", testNumber, expected, result);
    } else {
        printf("❌ Test Case %d Failed: Expected = %d, Got = %d\n", testNumber, expected, result);
    }

    freeList(head);
    return passed;
}

// Main test runner
int main() {
    int passed = 0;
    int total = 5;

    passed += runTest(1, 0, 0);   // Empty list
    passed += runTest(2, 1, 1);   // Single node
    passed += runTest(3, 3, 3);   // Small list
    passed += runTest(4, 5, 5);   // Medium list
    passed += runTest(5, 10, 10); // Longer list

    printf("\nSummary: ✅ %d / %d test cases passed.\n", passed, total);
    return passed == total ? 0 : 1;
}
