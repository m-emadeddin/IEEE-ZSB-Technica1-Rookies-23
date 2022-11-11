#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *    Modify the previous program such that
 *    only multiples of three or five are considered in the sum. 
 */


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    ll n;
    cin >> n;
    ll sum = 0;
    // adding Multiples of 3 AP Summation
    ll mul = n/3;
    sum += mul*(2*3+(mul-1)*3)/2;

    // adding Multiples of 5 AP Summation
    mul = n/5;
    sum += mul*(2*5+(mul-1)*5)/2;

    // Removing Overlap Multiples of 3*5 AP Summation
    mul = n/(3*5);
    sum -= mul*(2*15+(mul-1)*15)/2;
    cout << sum << endl;
}   