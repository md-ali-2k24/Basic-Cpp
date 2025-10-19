//Peak Index In Mountain
#include <bits/stdc++.h>
using namespace std;
int peakIndexInMountain(vector<int>& arr){
    int start = 1, end = arr.size() - 2;

    while (start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        else if (arr[mid - 1] < arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    return -1;
    
}

int main() {
    vector<int> nums = {1, 3, 5, 7, 6, 4, 2};

    cout << "The index value of Mountain is : " << peakIndexInMountain(nums) << endl;

    return 0;
}