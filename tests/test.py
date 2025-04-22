# tests/test.py

# Import the function from solution
from solutions.solution import getLength, Node

# Helper function to create a linked list with n nodes
def createList(n: int) -> Node:
    if n <= 0:
        return None

    head = Node(1)
    current = head
    for i in range(2, n + 1):
        newNode = Node(i)
        current.next = newNode
        current = newNode
    return head

# Run a single test case
def runTest(testNumber: int, nodes: int, expected: int) -> bool:
    head = createList(nodes)
    result = getLength(head)
    passed = (result == expected)

    if passed:
        print(f"✅ Test Case {testNumber} Passed: Expected = {expected}, Got = {result}")
    else:
        print(f"❌ Test Case {testNumber} Failed: Expected = {expected}, Got = {result}")
    
    return passed

# Main test runner
def main():
    total_tests = 5
    passed_tests = 0

    # Run test cases
    passed_tests += runTest(1, 0, 0)   # Empty list
    passed_tests += runTest(2, 1, 1)   # Single node
    passed_tests += runTest(3, 3, 3)   # Small list
    passed_tests += runTest(4, 5, 5)   # Medium list
    passed_tests += runTest(5, 10, 10) # Longer list

    print(f"\nSummary: ✅ {passed_tests} / {total_tests} test cases passed.")
    return 0 if passed_tests == total_tests else 1

if __name__ == "__main__":
    main()
