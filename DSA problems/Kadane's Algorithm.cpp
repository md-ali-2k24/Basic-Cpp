//Maximum Subarray Sum - Kadane's Algorithm
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int inputArray(int array[], int size)
{
    cout << "Enter the element of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int printArray(int array[], int size)
{
    cout << "The reverese array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main(){
    cout << "Enter a size of an array : ";
    int size;
    cin >> size;
    int array[size];

    inputArray(array, size);

    // Printing Sub Arratys  Maximum Sum
    int currentSum = 0, maxSum = INT_MIN;

        for (int i = 0; i < size; i++){
            currentSum += array[i];
            maxSum = max(currentSum,maxSum);

            if (currentSum < 0){
                currentSum = 0;
            }
        }

    cout <<"The maximum sub Array sum : "<<maxSum;

    return 0;
}
    //0(n)
