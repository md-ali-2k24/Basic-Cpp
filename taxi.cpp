#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> s(n);

    for (int i = 0; i < n; i++) {
        cin >> s[i];  
    }

    sort(s.begin(), s.end());

    int i = 0, j = n - 1, taxis = 0;

    while (i <= j) {
        if (s[i] + s[j] <= 4) {
            i++;
            j--;
        } else {
            j--;
        }
        taxis++;
    }

    cout << taxis << endl;

    return 0;
}
