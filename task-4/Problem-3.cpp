#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *   Find the minimum distance between 2 similar numbers in a list. 
 */

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    string s;
    getline(cin,s);
    vector<pair<ll,ll>>v;
    for(int i=0; i<s.size(); i+=2){
        v.push_back({(s[i]-'0'),i/2});
    }
    sort(v.begin(), v.end());
    ll mn = LONG_LONG_MAX;
    for(int i=0; i<v.size()-1; i++){
        if(v[i].first == v[i+1].first){
            mn = min(mn , v[i+1].second - v[i].second);
        }
    }
    cout << mn << endl;
}







