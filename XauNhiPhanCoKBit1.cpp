#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k;
ll check(string s) {
	ll cnt = 0;
	for(int i=0;i<s.size();i++) {
		if(s[i]=='1') cnt++;
	}	
	if(cnt==k) return 1;
	else return 0;
}

void Try(ll cnt, string s) {
	for(int i=0;i<=1;i++) {
		if(cnt==n) {
			if(check(s)) cout << s << endl;
			return;
		}	else Try(cnt+1,s+to_string(i));
	}	
}

void solve() {
	cin >> n >> k;
	string s = "";
	ll cnt = 0;
	Try(cnt,s);	
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}