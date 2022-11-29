#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *  Write a program that asks the user for a string
 *  and tests whether it's a palindrome.
 *  If it's a palindrome print "yes", if not, print "no".
 */

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    
    string s;
    cin >> s;
    cout << (s == string(s.rbegin(), s.rend()) ? "yes" : "no" ) << endl;

}







