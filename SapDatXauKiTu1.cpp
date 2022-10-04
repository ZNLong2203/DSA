#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	map<ll,ll> mp;
	for(int i=0;i<s.size();i++) {
		mp[s[i]]++;
	}
	ll xet = 0;
	for(auto x:mp) {
		xet = x.second;
		break;
	}
	if(xet-1 <= s.size()-xet) cout << "1\n";
	else cout << "-1\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}