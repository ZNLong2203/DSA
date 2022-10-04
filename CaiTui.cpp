#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,c;
	cin >> n >> c;
	ll dp[n+5][c+5]={0};
	memset(dp,0,sizeof(dp));
	pair<ll,ll> p[n+5];
	for(int i=1;i<=n;i++) cin >> p[i].first;
	for(int i=1;i<=n;i++) cin >> p[i].second;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=c;j++) {
			dp[i][j] = dp[i-1][j];
			if(j >= p[i].first) dp[i][j] = max(dp[i][j], (dp[i-1][j-p[i].first] + p[i].second));
		}
	}
	cout << dp[n][c] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}