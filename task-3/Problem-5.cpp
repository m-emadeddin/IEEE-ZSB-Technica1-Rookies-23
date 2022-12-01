#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *  Consider you have a country with a number of cities, some of which have space stations.
 *  Cities are numbered consecutively and each has a road of 1 km length connecting it to the next city.
 *  It is not a circular route, so the first city doesn't connect with the last city.
 *  Determine the maximum distance from any city to its nearest space station.
 */



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    ll n,m;
    cin >> n >> m;
    vector<ll>v(m,0);
    for(int i=0; i<m; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for(int i=0; i<n; i++){
        ll ind = upper_bound(v.begin(), v.end(), i ) - v.begin();
        if(ind == 0){
            ans = max(ans, v[ind] - i);
        }
        else if(ind < m){
            ans = max(ans, min( v[ind] - i , i - v[ind-1] ));
        }
        else if(ind == m){
            if(i >= v[ind-1]) ans = max(ans, i - v[ind-1]);
            else ans = max(ans, min(v[ind-1] - i, i - v[ind-2] ));
        }
    }
    cout << ans << endl;
}
