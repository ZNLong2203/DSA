#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,k;
	cin >> n >> k;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	sort(v.begin(),v.end());
	ll cnt = 0;
	for(int i=0;i<n;i++) {
		auto it = lower_bound(v.begin()+i+1,v.end(),k+v[i]);
		ll len = it-v.begin();
		cnt+=len-i-1;
	}
	cout << cnt << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}