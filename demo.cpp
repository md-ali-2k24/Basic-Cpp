#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;

        vector<long long> a(n);
        long long num;

        for (int j = 0; j < n; j++){
            cin >> a[j];
        }

        num =* max_element(a.begin(), a.end());
        cout << num*n << endl;
    }

    return 0;
}
