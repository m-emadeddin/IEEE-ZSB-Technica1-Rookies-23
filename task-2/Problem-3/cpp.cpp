#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *  Given String S. Determine if there is a Subsequence in S that is equal to "hello" or not.
 *  Note: A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements.
 */

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    
    string hello = "hello";
    string s;
    cin >> s;
    int j = 0;
    for(int i=0; i<s.size() && j<5; i++){
        if(s[i] == hello[j]){
            j++;
        }
    }
    cout << ( j == 5 ? "YES" : "NO") << endl;

}







