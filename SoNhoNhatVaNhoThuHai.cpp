#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	sort(v.begin(),v.end());
	ll min1 = v[0];
	ll min2 = v[1];
	if(min1==min2) cout << "-1\n";
	else cout << min1 << " " << min2 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}