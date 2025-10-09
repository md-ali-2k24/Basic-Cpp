// Function to find majority element using Boyer-Moore algorithm
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& vect) {
    int frequency = 0, answer = 0;

    for (int i = 0; i < vect.size(); i++) {
        if (frequency == 0) {
            answer = vect[i];
        }

        if (answer == vect[i]) {
            frequency++;
        } else {
            frequency--;
        }
    }
    return answer;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> vect(size);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> vect[i];
    }

    int result = majorityElement(vect);

    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "No majority element exists." << endl;
    }

    return 0;
}
    //0(n)