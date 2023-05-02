#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	pair<ll,ll> p,k;
	queue<pair<ll,ll>> q;
	p.first = n;
	p.second = 0;
	q.push(p);
	while(q.size()) {
		p = q.front(); q.pop();
		if(p.first==1) {
			cout << p.second << endl;
			return;
		}
		k.second = p.second + 1;
		if(p.first%2==0) {
			k.first = p.first/2;
			q.push(k);
		}
		if(p.first%3==0) {
			k.first = p.first/3;
			q.push(k);
		}
		if(p.first>1) {
			k.first = p.first-1;
			q.push(k);
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}