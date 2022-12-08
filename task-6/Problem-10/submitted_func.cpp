#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		ll n,k;
		cin >> n >> k;
		stack<ll>st;
		for(int i=0; i<n; i++){
			ll x;
			cin >> x;
			while(!(st.empty()) && st.top() < x && k>0){
				st.pop();
				k--;
			}
			st.push(x);
		}
		vector<ll>v;
		while(!(st.empty())){
			v.push_back(st.top());
			st.pop();
		}
		reverse(v.begin(), v.end());
		for(int i=0; i<v.size(); i++){
			cout << v[i] << " ";
		}
		cout << '\n';
	}
}