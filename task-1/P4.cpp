#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *   Write a program that asks the user for a number n
 *   and prints the sum of the numbers 1 to n inclusive.
 *   n will always be greater than 1.
 */


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    ll n;
    cin >> n;
    cout << n * (n+1) / 2 << endl;

}