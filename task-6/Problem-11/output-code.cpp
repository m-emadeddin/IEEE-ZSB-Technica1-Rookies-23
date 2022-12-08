#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


/**
 *   Problem:       https://codeforces.com/problemset/problem/884/A
 * 
 *   Submission:    https://codeforces.com/contest/884/submission/184293497
 */


void solve(){
    ll n,t;
    cin >> n >> t;
    ll a[n]{};
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    ll sum = 0, ans = 0;
    for(int i=0; i<n &&  sum < t; i++){
        ans++;
        sum += 86400 - a[i];
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int t=1;
    // cin >> t;
    while(t--) solve();
}

