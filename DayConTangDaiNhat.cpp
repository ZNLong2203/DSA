#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	ll dp[100005]={0};
	ll a[100005]={0};
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<n;i++) {
		dp[i]=1;
		for(int j=0;j<i;j++) {
			if(a[i] > a[j]) dp[i] = max(dp[i],dp[j]+1);
		}
	}
	cout << *max_element(dp,dp+n) << endl;
}

int main() {
	solve();
}