#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


/**
 *   https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem
 */


void solve(){
    string hackerrank = "hackerrank";
    string s;
    cin >> s;
    int j=0;
    for(int i=0; i<(int)s.size() && j<(int)hackerrank.size(); i++){
        if(s[i]==hackerrank[j]) j++;
    }
    cout << ( j == (int)hackerrank.size() ? "YES" : "NO") << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int t=1;
    cin >> t;
    while(t--) solve();
}

