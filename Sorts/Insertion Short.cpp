#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    
    insertionSort(array);
    printArray(array);

    return 0;
}

