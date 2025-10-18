//Product of Array Except self 
#include <bits/stdc++.h>
using namespace std;
int searchInRotatedArray(vector<int>& nums, int target){
    int start = 0, end = nums.size() - 1;
    while (start <= end){
        int mid = start + (end - start)/2;

        if (nums[mid] == target) return mid;
        if(nums[start] <= nums[mid]){
            if(nums[start] <= target && target <= nums[mid]){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }else{
            if(nums[mid] <= target && target <= nums[end]){
                start = mid +1;
            }else{
                end = mid -1;
            }
        }
    }

    return -1;
    
}

int main() {
    vector<int> nums = {7, 8, 1, 2, 3, 4, 5, 6};
    int target = 1;

    cout << "The index value of target is : " << searchInRotatedArray(nums,target) << endl;

    return 0;
}