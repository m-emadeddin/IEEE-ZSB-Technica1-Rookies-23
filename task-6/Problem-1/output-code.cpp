#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *   https://www.hackerrank.com/challenges/find-digits/problem
 */


void solve(){
    ll n; cin >> n;
    string s = to_string(n);
    ll f[10]{};
    for(int i=0; i<s.size(); i++){
        f[s[i]-'0']++;
    }
    ll counter = 0;
    for(int i=1; i<10; i++){
        if(n % i == 0) counter += f[i];
    }
    cout << counter << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int t=1;
    cin >> t;
    while(t--) solve();
}







