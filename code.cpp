#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt[5] = {0};  // index 1..4

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    int taxis = 0;

    // Groups of 4 → one taxi each
    taxis += cnt[4];

    // Groups of 3 take 1 from group of 1 (if possible)
    taxis += cnt[3];
    cnt[1] = max(0, cnt[1] - cnt[3]);

    // Pair groups of 2
    taxis += cnt[2] / 2;
    cnt[2] = cnt[2] % 2;   // If one group of 2 remains

    if (cnt[2] == 1) {     // One group of 2 left
        taxis++;           // One taxi for them
        cnt[1] = max(0, cnt[1] - 2);
    }

    // Remaining groups of 1
    taxis += (cnt[1] + 3) / 4;

    cout << taxis << endl;

    return 0;
}
