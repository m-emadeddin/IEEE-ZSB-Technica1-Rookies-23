#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *   Given two numbers A and B.
 *   Print the greatest common divisor between (A, B).
 */

ll gcd(ll  a, ll b){
    while (b != 0){
        ll t =  a % b;
        a = b;
        b = t;
    }
    return a;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    ll a,b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;
}