// tests/test.cpp

#include <iostream>
#include <cstdlib>
#include "../solutions/solution.cpp" // Include the solution directly

using namespace std;

// Helper function to create a linked list with n nodes
Node* createList(int n) {
    if (n <= 0) return nullptr;

    Node* head = new Node();
    head->data = 1;
    head->next = nullptr;

    Node* current = head;
    for (int i = 2; i <= n; ++i) {
        Node* newNode = new Node();
        newNode->data = i;
        newNode->next = nullptr;
        current->next = newNode;
        current = newNode;
    }
    return head;
}

// Free memory allocated to linked list
void freeList(Node* head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// Run a single test case
bool runTest(int testNumber, int nodes, int expected) {
    Node* head = createList(nodes);
    int result = getLength(head);
    bool passed = (result == expected);

    if (passed) {
        cout << "✅ Test Case " << testNumber << " Passed: Expected = " << expected << ", Got = " << result << endl;
    } else {
        cout << "❌ Test Case " << testNumber << " Failed: Expected = " << expected << ", Got = " << result << endl;
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

    cout << "\nSummary: ✅ " << passed << " / " << total << " test cases passed.\n";
    return passed == total ? 0 : 1;
}
