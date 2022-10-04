#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,m;
	cin >> n >> m;
	multiset<ll> se;
	for(int i=0;i<n+m;i++) {
		ll x; cin >> x;
		se.insert(x);
	}
	for(auto a:se) cout << a << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}