#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossiable(vector<int> arr, int N, int C, int minAllowedDistance) {
    int cowsPlaced = 1;
    int lastPosition = arr[0];

    for (int i = 0; i < N; i++){
        if (arr[i]-lastPosition >= minAllowedDistance){
            cowsPlaced++;
            lastPosition = arr[i];
        }

        if (cowsPlaced == C){
            return true;
        }   
    }
    
    return false;
}

int getDistance(vector<int> arr, int N, int C) {
    sort(arr.begin(), arr.end());
    int start = 1, end = arr[N-1]-arr[0], answer = -1;

    while (start <= end){
        int mid = start + (end - start) / 2;
        if (isPossiable(arr, N, C, mid)){
            answer = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    
    return answer;
}

int main(){
    vector<int> arr = {1, 2, 8, 4, 9};
    int N = 5, C = 3;

    cout << getDistance(arr, N, C) << endl;

    return 0;
}

