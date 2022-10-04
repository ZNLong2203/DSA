#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	pair<ll,ll> p[n];
	for(ll i=0;i<n;i++) {
		cin >> p[i].second >> p[i].first;
	}
	sort(p,p+n);
	int cnt = 1, xet = p[0].first;
	for(ll i=1;i<n;i++) {
		if(p[i].second>=xet) {
			xet = p[i].first;
			cnt++;
		}
	}
	cout << cnt << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}