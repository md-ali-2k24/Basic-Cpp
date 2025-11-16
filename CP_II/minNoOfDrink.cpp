/*
This winter is so cold in Nvodsk! A group of n friends decided to buy k bottles of a soft drink called "Take-It-Light" to warm up a bit. Each bottle has l milliliters of the drink. Also they bought c limes and cut each of them into d slices. After that they found p grams of salt.

To make a toast, each friend needs nl milliliters of the drink, a slice of lime and np grams of salt. The friends want to make as many toasts as they can, provided they all drink the same amount. How many toasts can each friend make?
Input

The first and only line contains positive integers n, k, l, c, d, p, nl, np, not exceeding 1000 and no less than 1. The numbers are separated by exactly one space.
Output

Print a single integer — the number of toasts each friend can make.
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout << "Enter the value of n ,k, l, c, d, p, nl, np: ";
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drink = (k * l) / nl;
    int total_slices = c * d;
    int total_salt = p / np;
    int max_toasts = min(total_drink, min(total_slices, total_salt)) / n;
    cout << "Maximum number of toasts: " << max_toasts << endl;

    return 0;
}

