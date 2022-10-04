#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,k;
	cin >> k >> n;
	ll dp[n+5][k+5]={0};
	memset(dp,0,sizeof(dp));
	vector<ll> v(n+1);
	for(int i=1;i<=n;i++) cin >> v[i];
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=k;j++) {
			dp[i][j] = dp[i-1][j];
			if(j >= v[i]) dp[i][j] = max(dp[i][j], (dp[i-1][j-v[i]] + v[i])); 
		}
	}
	cout << dp[n][k] << endl;
}

int main() {
	solve();
}