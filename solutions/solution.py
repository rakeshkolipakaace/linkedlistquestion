# solution.py

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Solution:
    def getCount(self, head):
        count = 0
        current = head
        while current:
            count += 1
            current = current.next
        return count
    
    
    

    def create_linked_list(self, arr):
        if not arr:
            return None
        head = Node(arr[0])
        current = head
        for val in arr[1:]:
            current.next = Node(val)
            current = current.next
        return head
