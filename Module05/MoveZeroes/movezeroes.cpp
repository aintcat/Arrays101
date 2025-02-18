#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int lastNonZeroFoundAt = 0; // Position to place the next non-zero element

    // Move all non-zero elements to the front of the array
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt++] = nums[i];
        }
    }

    // Fill the remaining positions with zeros
    for (int i = lastNonZeroFoundAt; i < n; i++) {
        nums[i] = 0;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);

    // Output the modified array
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
