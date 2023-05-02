#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s; cin >> s;
	ll n = s.size();
	ll dp[n+5][n+5] = {0};
	ll ans = 1;
	s = "%" + s;
	for(ll i=1;i<=n;i++) dp[i][i] = 1;
	for(ll len=2;len<=n;len++) {
		for(ll i=1;i<=n-len+1;i++) {
			ll j = i+len-1;
			if(len==2 && s[i]==s[j]) dp[i][j] = 1;
			else if(dp[i+1][j-1] && s[i]==s[j]) dp[i][j] = 1;
			if(dp[i][j]) ans = max(ans, len);
		}
	}
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}