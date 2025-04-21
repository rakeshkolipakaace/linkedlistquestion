#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

class Solution {
public:
    int getCount(Node* head);
    Node* createLinkedList(const vector<int>& arr);
};

// Function definitions
int Solution::getCount(Node* head) {
    int count = 0;
    while (head != nullptr) {
        count++;
        head = head->next;
    }
    return count;
}

Node* Solution::createLinkedList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;
    
    Node* head = new Node(arr[0]);
    Node* current = head;
    
    for (int i = 1; i < arr.size(); ++i) {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    
    return head;
}

int main() {
    Solution solution;
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = solution.createLinkedList(arr);
    int count = solution.getCount(head);
    return 0;
}
