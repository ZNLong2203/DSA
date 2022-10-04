#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,m,k;
	cin >> n >> m >> k;
	vector<ll> v(n+m);
	for(int i=0;i<n+m;i++) cin >> v[i];
	sort(v.begin(),v.end());
	cout << v[k-1] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}