#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    int getCount(struct Node* head) {
        int count = 0;
        Node* current = head;
        while (current != NULL) {
            count++;
            current = current->next;
        }
        return count;
    }
};

// ✅ Add this helper function
Node* createLinkedList(const vector<int>& arr) {
    if (arr.empty()) return NULL;

    Node* head = new Node(arr[0]);
    Node* tail = head;
    for (size_t i = 1; i < arr.size(); ++i) {
        tail->next = new Node(arr[i]);
        tail = tail->next;
    }
    return head;
}
