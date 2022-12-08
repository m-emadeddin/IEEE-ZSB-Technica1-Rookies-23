#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


/**
 *   https://www.hackerrank.com/challenges/circular-array-rotation/problem
 */


void solve(){
    ll n,k,q;
    cin >> n >> k >> q;
    ll a[n]{};
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    k %= n;
    while(q--){
        ll x;
        cin >> x;
        cout << a[(n-k+x)%n] << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int t=1;
    // cin >> t;
    while(t--) solve();
}

