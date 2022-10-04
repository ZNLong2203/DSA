#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	queue<ll> q;
	q.push(1);
	ll cnt = 1;
	while(1) {
		ll xet = q.front();
		q.pop();
		if((xet*10)==n) cnt++;
		if((xet*10)>=n) {
			cout << cnt << endl;
			return;
		}	else cnt++;
		if((xet*10+1)==n) cnt++;
		if((xet*10+1)>=n) {
			cout << cnt << endl;
			return;
		}	else cnt++;
		q.push(xet*10);
		q.push(xet*10+1);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}