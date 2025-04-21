from solution import Solution

def run_test(sol, input_list, expected):
    head = sol.create_linked_list(input_list)
    result = sol.getCount(head)

    print("Input:", input_list)
    print("Expected:", expected)
    print("Got:", result)

    passed = result == expected
    print("✅ Test Passed" if passed else "❌ Test Failed")
    print("-" * 40)
    return passed

def main():
    sol = Solution()
    all_passed = True

    all_passed &= run_test(sol, [1, 2, 3, 4, 5], 5)
    all_passed &= run_test(sol, [2, 4, 6, 7, 5, 1, 0], 7)
    all_passed &= run_test(sol, [10], 1)
    all_passed &= run_test(sol, [5, 15, 25, 35, 45, 55], 6)
    all_passed &= run_test(sol, [1000, 999, 998], 3)
    all_passed &= run_test(sol, [103], 1)

    if all_passed:
        print("🎉 All test cases passed!")
    else:
        print("❌ Some test cases failed!")

if __name__ == "__main__":
    main()
