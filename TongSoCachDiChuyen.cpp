#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9+7;
void solve() {
	ll n,k,cnt = 0;
	cin >> n >> k;
	ll dp[n+5]={0};
	dp[0] = 1;
	for(ll i=1;i<=n;i++) {
		for(ll j=1;j<=min(i,k);j++) {
			dp[i] += dp[i-j];
			dp[i] %= mod;
		}
	}
	cout << dp[n] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}