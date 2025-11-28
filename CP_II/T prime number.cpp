#include <iostream>
using namespace std;

string isPrime(long long t){
    int count = 0;
    if (t <= 3){
        return "NO";
    }else{
        if (t != 4 && t % 2 == 0){
            return "NO";
        }
        
        for (int  i = 2; i <= t/2; i++){
            if (t % i == 0){
                count ++;
            }
        }
    }

    if (count == 1){
        return "YES";
    }else {
        return "NO";
    }
}

int main() {
    int n;
    cin >> n;

    long long  t[n];
    for (int i = 0; i < n ; i++){
        cin >> t[i];
    }

    for (int i = 0; i < n; i++){
        cout << isPrime(t[i]) << endl;
    }

    return 0;
}
