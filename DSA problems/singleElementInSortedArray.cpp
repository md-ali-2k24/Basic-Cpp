#include <bits/stdc++.h>
using namespace std;

int singleElementInSortedArray(vector<int>& nums) {
    int start = 0, end = nums.size() - 1;
    int n = nums.size();

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Edge cases: check first or last element
        if (mid == 0 && nums[mid] != nums[mid + 1]) return nums[mid];
        if (mid == n - 1 && nums[mid] != nums[mid - 1]) return nums[mid];

        // If mid is the single element
        if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1]) {
            return nums[mid];
        }

        // Decide which side to go
        if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) ||
            (mid % 2 == 1 && nums[mid] == nums[mid - 1])) {
            start = mid + 1;  // go right
        } else {
            end = mid - 1;    // go left
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {1,1,2,2,3,4,4,5,5};
    cout << "Single element is: " << singleElementInSortedArray(nums) << endl;
    return 0;
}
