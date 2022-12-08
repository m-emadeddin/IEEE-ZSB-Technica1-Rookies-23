#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


/**
 *   https://www.hackerrank.com/challenges/acm-icpc-team/problem
 */


void solve(){
    ll n,m;
    cin >> n >> m;
    string a[n]{};
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    map<ll,ll>mx;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            ll cnt = 0;
            for(int k=0; k<m; k++){ 
                cnt += (int)(a[i][k]-'0') || (int)(a[j][k]-'0');
            }
            mx[cnt]++;
        }
    }
    auto it = mx.end();
    it--;
    cout << it->first << '\n' << it->second << '\n';

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int t=1;
    // cin >> t;
    while(t--) solve();
}

