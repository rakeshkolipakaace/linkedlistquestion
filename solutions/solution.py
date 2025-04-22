class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Solution:
    def getCount(self, head):
       # here the default return value is 0
       #so after you write the you can change the return value
        

   
   
   
   #the below code is also a question so dont change the below code
    def create_linked_list(self, arr):
        if not arr:
            return None
        head = Node(arr[0])
        current = head
        for value in arr[1:]:
            current.next = Node(value)
            current = current.next
        return head


# code here a