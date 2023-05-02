#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,v;
	cin >> n >> v;
	ll a[10005]={0};
	ll c[10005]={0};
	ll dp[n+5][v+5]={0};
	for(int i=0;i<=n;i++) dp[i][0] = 0;
	for(int i=0;i<=v;i++) dp[0][i] = 0;
	for(int i=1;i<=n;i++) cin >> a[i];
	for(int i=1;i<=n;i++) cin >> c[i];
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=v;j++) {
			dp[i][j] = dp[i-1][j];
//			cout << dp[i][j] << endl;
			if(j >= a[i]) dp[i][j] = max(dp[i][j], (dp[i-1][j-a[i]]+c[i]));
		}
	}
	cout << dp[n][v] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}