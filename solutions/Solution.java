class Node {
    int data;
    Node next;

    Node(int a) {
        data = a;
        next = null;
    }
}

class Solution {
    public int getCount(Node head) {
        int count = 0; // Initialize count to 0
        Node current = head; // Start from the head node
        
        // Traverse the linked list
        while (current != null) {
            count++; // Increment count for each node
            current = current.next; 
        }
        
        return count; 
    }

    public Node createLinkedList(int[] input) {
        if (input.length == 0) return null;
        
        Node head = new Node(input[0]);
        Node current = head;
        
        // Create the rest of the linked list
        for (int i = 1; i < input.length; i++) {
            current.next = new Node(input[i]);
            current = current.next;
        }
        
        return head;
    }
}
