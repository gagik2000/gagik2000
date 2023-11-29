#include <iostream>
#include <vector>

int findMissingNumber(const std::vector<int>& nums) {
    int n = nums.size() + 1; // n is the expected size of the array
    int totalXOR = 0;
    
    for (int i = 1; i <= n; ++i) {
        totalXOR ^= i; // XOR of all numbers from 1 to n
    }
    
    int arrXOR = 0;
    for (int num : nums) {
        arrXOR ^= num; // XOR of all numbers in the array
    }
    
    int missingNumber = totalXOR ^ arrXOR;
    return missingNumber;
}

int main() {
    std::vector<int> nums = {1, 2, 4, 5, 6}; // Example array with one missing number

    int missingNumber = findMissingNumber(nums);

    std::cout << "The missing number is: " << missingNumber << std::endl;

    return 0;
}
