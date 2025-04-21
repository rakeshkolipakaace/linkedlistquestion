#include <iostream>
#include <vector>
using namespace std;

struct Node; // Forward declaration

// Declare external functions from solution.cpp
class Solution {
public:
    int getCount(Node* head);
    Node* createLinkedList(const vector<int>& arr);
};

// Helper function to print vector
void printVector(const vector<int>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i < vec.size() - 1) cout << ", ";
    }
    cout << "]\n";
}

// Test function
bool testLinkedListCount(const vector<int>& inputList, int expectedLength) {
    Solution solution;
    Node* head = solution.createLinkedList(inputList);  // Using the method from Solution class
    int actualLength = solution.getCount(head);

    cout << "Input: ";
    printVector(inputList);
    cout << "Expected: " << expectedLength << "\nGot: " << actualLength << endl;

    bool passed = (actualLength == expectedLength);
    cout << (passed ? "✅ Test Passed" : "❌ Test Failed") << "\n---------------------------------------------\n";
    return passed;
}

int main() {
    bool allPassed = true;

    // Test cases
    allPassed &= testLinkedListCount({1, 2, 3, 4, 5}, 5);
    allPassed &= testLinkedListCount({2, 4, 6, 7, 5, 1, 0}, 7);
    allPassed &= testLinkedListCount({10}, 1);
    allPassed &= testLinkedListCount({5, 15, 25, 35, 45, 55}, 6);
    allPassed &= testLinkedListCount({1000, 999, 998}, 3);
    allPassed &= testLinkedListCount({103}, 1);

    if (allPassed)
        cout << "🎉 All test cases passed!" << endl;
    else
        cout << "❌ Some test cases failed!" << endl;

    return 0;
}
