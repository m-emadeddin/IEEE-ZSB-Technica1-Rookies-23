#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *   Try to think of an unimaginably large number, for instance, Googolplex.
 *   as you might notice no numerical data type can hold such a colossal number.
 *   the only way is by storing it as an array of digits. write a program to increment such a number by 1
 */

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    ll n;
    cin >> n;
    ll a[n]{};
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    reverse(a, a+n);
    bool done = false;
    for(int i=0; i<n; i++){
        if(a[i] < 9){
            a[i]++; done = true;
            break;
        }
        else{
            a[i] = 0;
        }
    }
    if(!done) cout << 1 << " ";
    for(int i=n-1; i>=0; i--){
        cout << a[i] << " \n"[i == 0];
    }
}
