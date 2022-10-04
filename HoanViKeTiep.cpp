#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<ll> v(n);
	for(ll i=0;i<n;i++) cin >> v[i];
	next_permutation(v.begin(),v.end());
	for(int i=0;i<n;i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
