#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for ( int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        int count = 0;
        for (int j = 0; j < n; j++){
            if (s[j] == '0'){
                count++;
            }else {
                for (int l = j+1; l < k+j; l++){
                    if (s[l] == '1'){
                        j = k;
                        continue;
                    }
                }
                j += k;
            }
        }

        cout << count << endl; //1 11 3 01010010000  
    }

    return 0;
}


