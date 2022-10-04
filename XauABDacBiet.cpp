#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k;
vector<string> res;
ll check(string s) {
	ll cnt = 0, mx = 0;
	for(int i=0;i<s.size();i++) {
		if(s[i]=='A') cnt++;
		else {
			if(cnt>mx) mx = cnt;
			cnt = 0;
		}
	}	
	if(cnt>mx) mx = cnt;
	if(mx==k) return 1;
	else return 0;
}

void Try(ll so, string s) {
	for(int i=0;i<=1;i++) {
		char c = 'A'+i;
		if(so==n) {
			if(check(s)) res.push_back(s);
			return;
		}	else Try(so+1,s+c);
	}
}

void solve() {
	cin >> n >> k;
	ll so = 0;
	string s = "";
	Try(so,s);	
	cout << res.size() << endl;
	for(auto x:res) cout << x << endl;
}

int main() {
	solve();
}