#include <iostream>
#include <string>
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
                for (int l = j+1; l <= k+j; l++){
                    if (s[l] == '1'){
                        j = l;
                    }
                }
                j = j+k;
            }
        }

        cout << count << endl; 
    }

    return 0;
}