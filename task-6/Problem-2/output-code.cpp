#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *   https://www.hackerrank.com/challenges/library-fine/problem
 */


void solve(){
    ll d1,m1,y1;
    ll d2,m2,y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    if(y1 > y2){
        cout << 10000 << '\n';
    }
    else if(m1 > m2 && y1 == y2){
        cout << 500 * (m1 - m2) << '\n';
    }
    else if(d1 > d2 && (m1 == m2 && y1 == y2)){
        cout << 15 * (d1 - d2) << '\n';
    }
    else{
        cout << 0 << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int t=1;
    // cin >> t;
    while(t--) solve();
}

