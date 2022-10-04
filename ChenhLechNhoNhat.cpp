#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	sort(v.begin(),v.end());
	ll xet = 0, kq = 1000000000;
	for(int i=1;i<n;i++) {
		xet = v[i]-v[i-1];
		if(xet < kq) kq = xet;
	}
	cout << kq << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}