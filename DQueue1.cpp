#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	deque<ll> dq;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		if(x%2!=0) dq.push_back(x);
		else dq.push_front(x);
	}
	string s; cin >> s;
	for(int i=0;i<s.size();i++) {
		if(s[i]=='F') dq.pop_front();
		else if(s[i]=='B') dq.pop_back();
	}
	while(dq.size()!=0) {
		cout << dq.front() << " ";
		dq.pop_front();
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}