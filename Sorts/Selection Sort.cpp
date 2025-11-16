#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void inputArray(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
}

void printArray(vector<int>& array) {
    cout << "The sorted array is: ";
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    vector<int> array(size);
    cout << "Enter the elemts of array: ";
    inputArray(array);
    
    selectionSort(array);
    printArray(array);

    return 0;
}

