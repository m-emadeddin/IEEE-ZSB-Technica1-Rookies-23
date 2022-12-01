#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *  You have a book. When you open the book, page 1 is always on the right side.
 *  When you flip page 1, you see pages 2 and 3. 
 *  If the book is n pages long, and you want to turn to page p,
 *  what is the minimum number of pages to turn? 
 *  You can start at the beginning or the end of the book.
 */



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    ll n,q;
    cin >> n >> q;
    n/=2,q/=2;
    cout << min(q,n-q) << endl;
}
