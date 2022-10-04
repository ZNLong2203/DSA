#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	priority_queue<ll> q;
	ll n; cin >> n;
	string s; cin >> s;
	map<char,ll> mp;
	for(int i=0;i<s.size();i++) mp[s[i]]++;
	for(auto x:mp) {
		q.push(x.second);
	}
	while(n--) {
		ll xet = q.top()-1;
		q.pop();
		q.push(xet);
	}
	ll kq = 0;
	while(q.size()!=0) {
		ll xet = pow(q.top(),2);
		kq+=xet;
		q.pop();
	}
	cout << kq << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}