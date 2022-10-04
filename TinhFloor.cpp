#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,k;
	cin >> n >> k;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	auto it = upper_bound(v.begin(),v.end(),k);
	if(it-v.begin()==0) cout << "-1\n";
	else cout << it-v.begin() << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}