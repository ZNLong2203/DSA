#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	ll dp[n+5]={0};
	dp[0] = 1;	
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=min(i,3);j++) {
			dp[i]+=dp[i-j];
		}
	}
	cout << dp[n] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}