#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *  Write a program that takes a sorted list as an input and removes the duplicates.
 */

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    
    set<ll>s;
    string str;
    getline(cin,str);
    for(int i=0; i<str.size(); i+=2){
        s.insert(str[i]-'0');
    }
    for(auto i : s){
        cout << i << " \n"[i == *(s.end())];
    }
}
