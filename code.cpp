#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string removeOccurrences(string s, string part){
    while (s.length() > 0 && s.find(part) < s.length()){
        int start = s.find(part), end = part.length();
        s.erase(start, end);
    }
    return s;
}
int main(){
    string s = "axxxxyyyyb";
    string part = "xy";

    cout << removeOccurrences(s, part) << endl;

    return 0;
}
