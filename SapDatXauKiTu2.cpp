#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	ll xet = 0;
	string s; cin >> s;
	map<char,ll> mp;
	for(int i=0;i<s.size();i++) {
		mp[s[i]]++;
		xet = max(xet,mp[s[i]]);
	}
	if(xet<=(s.size()+n-1)/n) cout << "1\n";
	else cout << "-1\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}