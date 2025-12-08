#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--) {
        long long n, k = 0, num = 0;
        cin >> n;

        vector<long long> a(n);
        vector<long long> b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int j = 0; j < n; j++){
            if(a[j] < 0 && b[j] < 0){
                if ((a[j] % 2 == 0 && b[j] % 2 == 0) || 
                    (a[j] % 2 != 0 && b[j] % 2 != 0)){
                    num = min(a[j], b[j]);
                    if (a[j] == num)
                        k = k - a[j];
                    else
                        k = b[j] - k;
                }
                else if (a[j] % 2 == 0 && b[j] % 2 != 0){
                    k = k - a[j];
                }
            }
            else if(a[j] >= 0 && b[j] < 0){
                if (a[j] % 2 == 0 && b[j] % 2 != 0){
                    k = b[j] - k;
                }
                else if (a[j] % 2 != 0 && b[j] % 2 != 0){
                    num = min(a[j], -b[j]); //
                    if (a[j] == num)
                        k = k - a[j];
                    else
                        k = b[j] - k;
                }
            }
            else if(a[j] >= 0 && b[j] >= 0){
                if (a[j] % 2 == 0 && b[j] % 2 == 0){
                    num = max(a[j], b[j]);
                    if (a[j] == num)
                        k = k - a[j];
                    else
                        k = b[j] - k;
                }
                else if (a[j] % 2 != 0 && b[j] % 2 == 0){
                    k = b[j] - k;
                }
                else if (a[j] % 2 != 0 && b[j] % 2 != 0){
                    num = max(a[j], b[j]);
                    if (a[j] == num)
                        k = k - a[j];
                    else
                        k = b[j] - k;
                }
            }
            else if(a[j] < 0 && b[j] >= 0){
                if (a[j] % 2 != 0 && b[j] % 2 == 0){
                    k = k - a[j];
                }
            }
        }
        
        cout << k << endl;
    }

    return 0;
}
