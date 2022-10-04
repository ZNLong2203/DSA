#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9+7;
void solve() {
	int n;
	cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	ll sum = 0;
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++) {
		sum+=(v[i]*i)%mod;
		sum%=mod;
	}
	cout << sum%mod << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}