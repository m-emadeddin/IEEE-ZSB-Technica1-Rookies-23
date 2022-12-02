#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *   You are given a number that contains 4 digits with at least two distinct digits. 
 *   Your program should perform the following routine on the number:
 *      Arrange the digits in descending order and in ascending order 
 *      (adding zeros to fit it to a 4-digit number),
 *       and subtract the smaller number from the bigger number.
 *   Then repeat the previous step.
 *   Performing this routine will always cause you to reach a fixed number: 6174.
 *   Your program should return the number of times this routine must be performed until 6174 is reached.
 */

bool smaller(string a, string b){
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < b[i])
            return true;
        else if (a[i] > b[i])
            return false;
    }
    return false;
}

string sub(string s){
    string a = s, b = s;
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    if (smaller(a, b)) swap(a, b);

    string str = "";
    ll carry = 0;
    for (int i = b.size() - 1; i >= 0; i--) {
        int sub = a[i] - b[i] - carry;
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else{
            carry = 0;
        }
        str.push_back(sub + '0');
    }

    reverse(str.begin(), str.end());
    return str;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    string s;
    cin >> s;
    ll cnt = 0;
    while(s != "6174"){
        s = sub(s);
        cnt++;
    }
    cout << cnt << endl;
}
