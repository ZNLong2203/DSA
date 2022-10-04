#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	queue<ll> q;
	q.push(1);
	if(n==1) {
		cout << "1\n";
		return;
	}
	while(1) {
		ll xet = q.front();
		q.pop();
		if((xet*10)%n==0) {
			cout << xet*10 << endl;
			return;
		}
		if((xet*10+1)%n==0) {
			cout << xet*10+1 << endl;
			return;
		}
		q.push(xet*10);
		q.push(xet*10+1);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}