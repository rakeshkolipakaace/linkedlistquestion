// solutions/solution.cpp

#include <iostream>

using namespace std;

// Definition of a linked list node
struct Node {
    int data;
    Node* next;
};

// Function to calculate the length of the linked list1
int getLength(Node* head) {
    int count = 0;
    while (head != nullptr) {
        count++;
        head = head->next;
    }
    return count;
}
