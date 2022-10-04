#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<ll> v;
	set<ll> se;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		v.push_back(x);
		se.insert(x);
	}
	sort(v.begin(),v.end());
	cout << v[n-1] - v[0] - se.size() + 1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}