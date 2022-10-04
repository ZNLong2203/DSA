#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string x,y;
	cin >> x >> y;
	int dp[x.size()+1][y.size()+1]={0};
	for(int i=0;i<=x.size();i++) dp[i][0]=0;
	for(int i=0;i<=y.size();i++) dp[0][i]=0;
	for(int i=0;i<x.size();i++) {
		for(int j=0;j<y.size();j++) {
			if(x[i]==y[j]) dp[i+1][j+1] = dp[i][j] + 1;
			else dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
		}
	}
	cout << dp[x.size()][y.size()] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}