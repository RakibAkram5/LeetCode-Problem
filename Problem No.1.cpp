#include <iostream>

class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x; // The square root of 0 is 0, and the square root of 1 is 1.

        int left = 1, right = x / 2, result = 0;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long squared = mid * mid;

            if (squared == x) {
                return mid; // Perfect square
            } else if (squared < x) {
                result = mid; // Store the current mid as it could be the floor of sqrt(x)
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result; // Return the floor of sqrt(x)
    }
};

int main() {
    Solution sol;

    // Test cases
    int x1 = 4;
    int x2 = 8;
    int x3 = 0;
    int x4 = 1;

    std::cout << "Input: " << x1 << " -> Output: " << sol.mySqrt(x1) << std::endl;
    std::cout << "Input: " << x2 << " -> Output: " << sol.mySqrt(x2) << std::endl;
    std::cout << "Input: " << x3 << " -> Output: " << sol.mySqrt(x3) << std::endl;
    std::cout << "Input: " << x4 << " -> Output: " << sol.mySqrt(x4) << std::endl;

    return 0;
}

