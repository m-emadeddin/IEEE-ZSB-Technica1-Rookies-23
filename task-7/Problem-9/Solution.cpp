#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
/**
 *   Problem-9, Codeforces Submission: 
 *      https://codeforces.com/contest/271/submission/185261298
 */

bool isDistinct(ll n){
    string s = to_string(n);
    set<char>ss;
    for(auto i : s){
        ss.insert(i);
    }
    return ss.size() == s.size();
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr),cout.tie(nullptr);
    ll n;
    cin >> n;
    int ans = 0;
    for(int i=n+1; ;i++){
        if(isDistinct(i)){
            cout << i << endl;
            return 0;
        }
    }
}