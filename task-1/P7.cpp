#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *   Given a number N. Print 2 lines that contain the following respectively:

- Print N in a reversed order and not leading zeroes.
- If N is a palindrome number print "YES" otherwise, print "NO.

Note: A palindrome number is a number that reads the same forward or backward.
 */

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    ll n;
    cin >> n;
    string s = to_string(n);
    reverse(s.begin(), s.end());
    ll rn = stoll(s);
    cout << rn << endl;
    cout << ( rn==n? "YES" : "NO" ) << endl;

}