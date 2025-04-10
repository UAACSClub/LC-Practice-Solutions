#include <iostream>
#include <vector>

void rotate(std::vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0 || k % n == 0) return;

    k = k % n;

    for (int i = 0; i < k; ++i) {
        int last = nums[n - 1];

        // Shift elements to the right while declaring variables at the same time
        for (int j = n - 1; j > 0; --j) {
            nums[j] = nums[j - 1];
        }

        nums[0] = last;
    }
}

/*
int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;

    std::cout << "Original array: ";
    for (int num : nums) std::cout << num << " ";
    std::cout << std::endl;

    rotate(nums, k);

    std::cout << "Rotated array: ";
    for (int num : nums) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
*?