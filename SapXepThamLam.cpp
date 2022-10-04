#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, ok = 1; cin >> n;
	vector<ll> v;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		v.push_back(x);
	}
	vector<ll> xet(v.begin(),v.end());
	sort(xet.begin(),xet.end());
	for(int i=0;i<n;i++) {
		if(v[i]!=xet[i] && v[i]!=xet[n-i-1]) {
			cout << "No\n";
			return;
		}
	}
	cout << "Yes\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}