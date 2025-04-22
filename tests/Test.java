import java.util.Arrays;

class Test {
    public static void main(String[] args) {
        Solution sol = new Solution();
        boolean allPassed = true;

        allPassed &= runTest(sol, new int[]{1, 2, 3, 4, 5}, 5);
        allPassed &= runTest(sol, new int[]{2, 4, 6, 7, 5, 1, 0}, 7);
        allPassed &= runTest(sol, new int[]{10}, 1);
        allPassed &= runTest(sol, new int[]{5, 15, 25, 35, 45, 55}, 6);
        allPassed &= runTest(sol, new int[]{1000, 999, 998}, 3);
        allPassed &= runTest(sol, new int[]{103}, 1);

        if (allPassed) {
            System.out.println("🎉 All test cases passed!");
        } else {
            System.out.println("❌ Some test cases failed!");
        }
    }

    static boolean runTest(Solution sol, int[] input, int expected) {
        Node head = sol.createLinkedList(input);
        int result = sol.getCount(head);

        System.out.println("Input: " + Arrays.toString(input));
        System.out.println("Expected: " + expected);
        System.out.println("Got: " + result);

        boolean passed = result == expected;
        System.out.println(passed ? "✅ Test Passed" : "❌ Test Failed");
        System.out.println("-------------------------------------------");
        return passed;
    }
}
