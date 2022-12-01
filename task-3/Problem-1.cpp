#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *   Given a square matrix, calculate the absolute difference between the sums of its diagonals.
 */


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    ll n;
    cin >> n;
    ll a[n][n];
    ll A = 0, B = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            if(i==j){
                A+=a[i][j];
            }
            if(n-i == j+1){
                B+=a[i][j];
            }
        }
    }
    cout << abs(A-B) << endl;

}







