#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,k; cin >> n >> k;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	auto it = lower_bound(v.begin(),v.end(),k);
	if(*it!=k) cout << "NO\n";
	else cout << it-v.begin()+1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}