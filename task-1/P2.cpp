#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *  Given a number N. Print the factorial of number N.
 */


ll fac_iter(ll n){
    ll res = 1;
    for(int i=n; i>=2; i--){
        res *= i;
    }
    return res;
}

ll fac_recur(ll n){
    if(n == 1 || n == 0){
        return 1;
    }
    
    return n*fac_recur(n-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    ll n;
    cin >> n;

    cout << fac_iter(n) << endl;
    cout << fac_recur(n) << endl;

}







