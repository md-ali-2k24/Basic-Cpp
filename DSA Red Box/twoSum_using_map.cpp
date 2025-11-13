#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;  // value → index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (m.find(complement) != m.end()) {
            return {m[complement], i};  // found the pair
        }

        m[nums[i]] = i;  // store current value and index
    }

    return {}; // should never reach here if one solution always exists
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}
