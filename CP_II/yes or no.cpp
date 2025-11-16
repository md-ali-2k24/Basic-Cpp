/*
There is a string ss of length 33, consisting of uppercase and lowercase English letters. Check if it is equal to "YES" (without quotes), where each letter can be in any case. For example, "yES", "Yes", "yes" are all allowable.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string ch;
        cin >> ch;
        for (int j = 0; j < 3; j++)
        {
            ch[j] = tolower(ch[j]);
        }
        if (ch == "yes")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
         
    }
    
    return 0;
}
