#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll dp[10000]={0};
	string s; cin >> s;
	for(int i=0;i<s.size();i++) dp[i] = 1;
	for(int i=0;i<s.size();i++) {
		for(int j=0;j<i;j++) {
			if(s[i]==s[j]) dp[i+1] = max(dp[i+1],dp[j]+1);
		}
	}
	cout << dp[s.size()] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}