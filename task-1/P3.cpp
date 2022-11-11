#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *  Write a program that contains three functions that compute:
 *  the sum of the numbers in a list. 
 * 
 *  - The first function uses for loop, 
 *  - The second function uses while loop, and
 *  - The third function uses recursion. 
 */

ll sum_for(ll a[], ll n){
    ll sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    return sum;
}

ll sum_while(ll a[], ll n){
    ll sum = 0, index = 0;
    while(index<n){
        sum += a[index];
        index++;
    }
    return sum;
}

ll sum_recu(ll a[], ll n, ll ind){
    if(ind == n){
        return 0;
    }
    return a[ind] + sum_recu(a , n , ++ind);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    ll n;
    cin >> n;
    ll a[n]{};
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << sum_for(a, n) << endl
        << sum_while(a,n) << endl
        << sum_recu(a,n,0) << endl;
}