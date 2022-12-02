#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *   Write a program that asks the user for two strings, s1 and s2,
 *   and tests whether s2 contains a permutation of s1.
 *   returns true if it satisfies the condition, returns false otherwise
 */


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    string s,t;
    cin >> s >> t;
    if(s.size() > t.size()){
        cout << "false" << endl;
        return 0;
    }
    for(int i=0; i<t.size()-s.size(); i++){
        ll frs[26]{};
        ll frt[26]{};
        bool ok = true;
        for(int j=0; j<s.size(); j++){
            frs[s[j]-'a']++;
            frt[t[i+j]-'a']++;
        }
        for(int j=0; j<26; j++){
            if(frs[j] != frt[j]) ok = false;
        }
        if(ok){
            cout << "true" << endl;
            return 0;
        }
    }
    cout << "false" << endl;

}







