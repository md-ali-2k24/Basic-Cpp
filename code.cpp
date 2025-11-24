#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void reverseString(vector<char> &str){
    int start = 0;
    int end = (int)str.size() - 1;
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

void printString(vector<char> &str){
    for(char c : str){
        cout << c;
    }
    cout << endl;
}
int main(){
    vector<char> str = {'h','e','l','l','o'};
    reverseString(str);

    printString(str);
    return 0;
}
