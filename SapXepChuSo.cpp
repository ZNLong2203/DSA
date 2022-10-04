#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<string> v(n);
	set<ll> se;
	for(int i=0;i<n;i++) cin >> v[i];
	for(int i=0;i<n;i++) {
		for(int j=0;j<v[i].size();j++) {
			se.insert(v[i][j]-'0');
		}
	}
	for(auto x:se) cout << x << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}