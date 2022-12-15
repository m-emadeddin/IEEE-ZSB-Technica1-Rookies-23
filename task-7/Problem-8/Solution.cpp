#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
/**
 *   Problem-8, Codeforces Submission: 
 *      https://codeforces.com/contest/32/submission/185260786
 */

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr),cout.tie(nullptr);
    string s;
    cin >> s;
    string ans;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '.'){
            ans += '0';
        }
        else{
            if(s[i+1] == '.') ans+= '1';
            else ans+= '2';
            i++;
        }
    }
    cout << ans << endl;
    
}