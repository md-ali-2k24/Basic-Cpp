#include <iostream>
#include <vector>
using namespace std;
void reverseArray(int array[], int size) {
    int start = 0, end = size - 1;

    while (start < end)
    {
        swap (array[start], array[end]);
        start ++;
        end--;
    }
    cout << "The reverse array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    
}


int main(){
    int size;
    cout << "Enter the size of an array : ";
    cin >>size;
    
    int array[size];
    cout << "Enter the values of the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    
    reverseArray(array,size);
    return 0;
}