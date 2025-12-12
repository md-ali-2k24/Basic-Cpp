//Contaier with most water 
#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height){
    int maxWater = 0;
    int leftPiler = 0, rightPiler = height.size() - 1;

    while (leftPiler < rightPiler){
        int width = rightPiler - leftPiler;
        int h = min(height[leftPiler], height[rightPiler]);
        int currentWater = width * h;

        maxWater = max(maxWater, currentWater);

        height[leftPiler] < height[rightPiler] ? leftPiler++ : rightPiler--;
    }

    return maxWater;
}

int main(){
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "Maximum water container: " << maxArea(height) << endl;

    return 0;
}

