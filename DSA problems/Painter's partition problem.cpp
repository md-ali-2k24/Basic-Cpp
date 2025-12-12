#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime){
    int painterCount = 1;
    int timeSum = 0;

    for (int i = 0; i < n; i++){
        if (timeSum + arr[i] <= maxAllowedTime){
            timeSum += arr[i];
        }
        else{
            painterCount++;
            timeSum = arr[i];
        }
    }
    return painterCount <= m;
}

int minTimeToPaint(vector<int> &arr, int n, int m){
    int sum = 0, maxValue = INT8_MIN;

    for (int i = 0; i < n; i++){
        sum += arr[i];
        maxValue = max(maxValue, arr[i]);
    }

    int start = maxValue, end = sum;
    int ans = -1;

    while (start <= end){
        int mid = start + (end - start) / 2;

        if (isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    
    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << minTimeToPaint(arr, n, m) << endl;

    return 0;
}
