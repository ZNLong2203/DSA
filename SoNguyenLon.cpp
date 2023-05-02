#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s1,s2;
	cin >> s1 >> s2;
	ll len1 = s1.size();
	ll len2 = s2.size();
	ll dp[len1+5][len2+5];
	for(int i=0;i<=len2;i++) dp[0][i] = 0;
	for(int i=0;i<=len1;i++) dp[i][0] = 0;
	for(int i=0;i<len1;i++) {
		for(int j=0;j<len2;j++) {
			if(s1[i]==s2[j]) dp[i+1][j+1] = dp[i][j] + 1;
			else dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
		}
	}
	cout << dp[len1][len2] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}