//Product of Array Except self 
#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n, 1);

    // prefix
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int suffix = 1;
    // suffix 
    for (int i = n - 2; i >= 0; i--) {
        suffix *= nums[i + 1]; // ith suffix
        ans[i] *= suffix;
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    vector<int> result = productExceptSelf(nums);

    cout << "Result: ";
    
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}