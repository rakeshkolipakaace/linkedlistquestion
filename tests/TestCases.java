// tests/TestCases.java

import solutions.Solution;
import solutions.Solution.Node;

public class TestCases {

    // Helper method to create a linked list with n nodes
    public static Node createList(int n) {
        if (n <= 0) return null;

        Node head = new Node(1);
        Node current = head;

        for (int i = 2; i <= n; i++) {
            current.next = new Node(i);
            current = current.next;
        }
        return head;
    }

    // Run a single test case
    public static boolean runTest(int testNumber, int nodes, int expected) {
        Node head = createList(nodes);
        int result = Solution.getLength(head);
        boolean passed = result == expected;

        if (passed) {
            System.out.println("✅ Test Case " + testNumber + " Passed: Expected = " + expected + ", Got = " + result);
        } else {
            System.out.println("❌ Test Case " + testNumber + " Failed: Expected = " + expected + ", Got = " + result);
        }

        return passed;
    }

    public static void main(String[] args) {
        int passed = 0;
        int total = 5;

        passed += runTest(1, 0, 0) ? 1 : 0;
        passed += runTest(2, 1, 1) ? 1 : 0;
        passed += runTest(3, 3, 3) ? 1 : 0;
        passed += runTest(4, 5, 5) ? 1 : 0;
        passed += runTest(5, 10, 10) ? 1 : 0;

        System.out.println("\nSummary: ✅ " + passed + " / " + total + " test cases passed.");
        System.exit(passed == total ? 0 : 1);
    }
}
