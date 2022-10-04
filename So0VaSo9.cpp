#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	queue<ll> q;
	q.push(9);
	while(q.size()) {
		ll xet = q.front();
		q.pop();
		if(xet%n==0) {
			cout << xet << endl;
			return;
		}
		q.push(xet*10);
		q.push(xet*10+9);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}