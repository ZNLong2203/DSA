#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	map<ll,ll> mp;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		mp[x]++;
	}
	cout << mp[0] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}