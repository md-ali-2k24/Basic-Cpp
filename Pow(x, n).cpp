#include <iostream>
using namespace std;

double myPow(double x, int n) {
    if (n == 0) return 1.0;
    if (x == 0) return 0.0;
    if (x == 1) return 1.0;
    if (x == -1 && n % 2 == 0) return 1.0;
    if (x == -1 && n % 2 != 0) return -1.0;

    long binForm = n;
    double answer = 1;

    if (binForm < 0) {
        x = 1 / x;
        binForm = -binForm;
    }

    while (binForm > 0) {
        if (binForm % 2 == 1) {
            answer *= x;
        }
        x *= x;
        binForm /= 2;
    }

    return answer;
}

int main() {
    cout << myPow(2, 10) << endl;   // 1024
    cout << myPow(2, -3) << endl;   // 0.125
    cout << myPow(-2, 5) << endl;   // -32
    return 0;
}
