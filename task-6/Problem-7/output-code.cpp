#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


/**
 *   https://www.hackerrank.com/challenges/beautiful-triplets/problem
 */


void solve(){
    ll n,d;
    cin >> n >> d;
    ll a[n]{};
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    ll ans = 0;
    for(int i=0; i<n; i++){
        ans += binary_search(a,a+n, a[i]+d) 
                        && binary_search(a,a+n, a[i]+2*d);
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

