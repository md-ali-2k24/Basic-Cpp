#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << a << " & " << b << " ";

    if (a >= 0 && b < 0)
        if (a % 2 != 0 && b % 2 != 0){
            cout << max(a, -b);
        }

    return 0;
}
