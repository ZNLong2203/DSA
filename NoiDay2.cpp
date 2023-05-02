#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9+7;
void solve() {
	ll n; cin >> n;
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		pq.push(x);
	}
	ll sum = 0;
	while(pq.size()>1) {
		ll xet1 = pq.top(); pq.pop();
		ll xet2 = pq.top(); pq.pop();
//		cout << xet1 << " " << xet2 << endl;
		ll k = (xet1+xet2)%mod;
		sum = (sum+k)%mod;
		pq.push(k);
	}
	cout << sum << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}