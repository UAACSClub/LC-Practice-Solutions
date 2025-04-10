#include <iostream>
#include <vector>
#include <algorithm>

void rotate(std::vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0 || k % n == 0) return;

    k = k % n;  // Ensure k is within bounds

    // Reverse entire array
    std::reverse(nums.begin(), nums.end());

    // Reverse first k elements
    std::reverse(nums.begin(), nums.begin() + k);

    // Reverse the rest
    std::reverse(nums.begin() + k, nums.end());
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    std::cout << "Rotated array: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
