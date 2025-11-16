#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    
    bubbleSort(array);
    printArray(array);

    return 0;
}

