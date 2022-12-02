#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *   group the anagrams together of an array of strings. You can return the answer in any order.
 */

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    ll n;
    cin >> n;
    vector<pair<string,string>>v(n);
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        v[i].second = s;
        sort(s.begin(), s.end());
        v[i].first = s;
    }
    string key = v[0].first;
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++){
        if(v[i].first == key){
            cout << v[i].second << " ";
        }
        else{
            cout << endl << v[i].second << " ";
            key = v[i].first;
        }
    }
    
}
