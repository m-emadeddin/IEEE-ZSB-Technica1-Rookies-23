#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *    You have n (n > 1) bottles of water, each bottle is described by remaining volume of water and capacity.
 *    You should determine if you can pour all remaining water into just 2 bottles. 
 */



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    ll n;
    cin >> n;
    vector<ll>a(n,0);
    ll tot = 0;
    for(int i=0; i<n; i++){
        ll vol = 0;
        cin >> vol >> a[i];
        tot += vol;
    }
    sort(a.rbegin(), a.rend());
    cout << (tot <= a[0]+a[1] ? "Yes" : "No") << endl;
    

}


