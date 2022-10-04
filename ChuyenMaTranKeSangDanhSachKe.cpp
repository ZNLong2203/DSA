#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<vector<ll>> v(n+5);
	for(ll i=1;i<=n;i++) {
		for(ll j=1;j<=n;j++) {
			ll x; cin >> x;
			if(x==1 && (i>j)) {
				v[i].push_back(j);
				v[j].push_back(i);
			} 
 		}
	}
	for(int i=1;i<=n;i++) {
		for(auto x:v[i]) cout << x << " ";
		cout << endl;
	}
}

int main() {
	solve();
}