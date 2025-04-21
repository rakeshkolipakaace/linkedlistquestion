#include <iostream> 
using namespace std; 
// Node for Linked List
class Node  
{  
    public:
    const char* data;  
    Node* next;  
};  
// class for creating a LinkedList
void add(Node** head_ref, const char* val)  
{  
    // allocating new_node
    Node* new_node =new Node(); 
    new_node->data = val;  
    new_node->next = (*head_ref);  
    (*head_ref) = new_node;  
}  
// Recursive function to calculate the length
int getLength(struct Node* head) 
{ 
    // Base case 
    if (head == NULL) 
        return 0; 
    else
        return 1 + getLength(head->next); 
} 
// Main function
int main()  
{
    Node* head = NULL;  
    // adding elements in the LinkedList
    add(&head, "A");  
    add(&head, "B");  
    add(&head, "C");  
    add(&head, "D");   
    // Printing the length of the LinkedList by calling the getLength()
    cout<<"Length of LinkedList: "<< getLength(head);  
    return 0;  
}  