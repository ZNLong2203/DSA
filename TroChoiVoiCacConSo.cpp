#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll check(string s) {
	for(int i=1;i<s.size()-1;i++) {
		if(s[i]+1==s[i+1] || s[i]+1==s[i-1] || s[i]-1==s[i+1] || s[i]-1==s[i-1]) return 0;
	}	
	return 1;
}

void solve() {
	ll n; cin >> n;
	string s = "";
	for(int i=1;i<=n;i++) {
		s+=to_string(i);
	}
	do {
		if(check(s)) cout << s << endl;
	}	while(next_permutation(s.begin(),s.end()));
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}