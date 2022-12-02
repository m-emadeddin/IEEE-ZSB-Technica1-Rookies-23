#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *   Rotate a 2D-Matrix by 90 degs without any libraries.
 */

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    ll n;
    cin >> n;
    ll a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for(int j=0 ; j<n; j++){
        for(int i=n-1; i>=0; i--){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
