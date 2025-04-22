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

        return 0;
       
    }

    public Node createLinkedList(int[] input) {
        if (input.length == 0) return null;
        
        Node head = new Node(input[0]);
        Node current = head;
        
        for (int i = 1; i < input.length; i++) {
            current.next = new Node(input[i]);
            current = current.next;
        }
        
        return head;
    }
}
