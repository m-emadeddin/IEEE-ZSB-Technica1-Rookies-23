#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

typedef long long ll;
using namespace std;
using namespace __gnu_pbds;


/**
 *   https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
 */


void solve(){
    ll n; cin >> n;
    tree <ll,  null_type, less<ll>,  rb_tree_tag,
      tree_order_statistics_node_update > ranked;
    for(int i=0; i<n; i++){
        ll ins = 0; cin >> ins;
        ranked.insert(ins);
    }
    ll m; cin >> m;
    for(int i=0; i<m; i++){
        ll player = 0; cin >> player;
        ranked.insert(player);
        cout << ranked.size() - ranked.order_of_key(player) << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int t=1;
    // cin >> t;
    while(t--) solve();
}

