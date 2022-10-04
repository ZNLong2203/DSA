#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,m;
	cin >> n >> m;
	vector<ll> v[n+5];
	for(int i=1;i<=m;i++) {
		ll a,b; cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=1;i<=n;i++) {
		sort(v[i].begin(),v[i].end());
		cout << i << ": ";
		for(auto x:v[i]) cout << x << " ";
		cout << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
