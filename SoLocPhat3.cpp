#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n;
ll check(ll x) {
	ll cnt = 0;
	while(x>0) {
		x/=10;
		cnt++;
	}	
	return cnt;
}

void solve() {
	cin >> n;
	queue<ll> q;
	vector<ll> res;
	q.push(6); q.push(8);
	res.push_back(6); res.push_back(8);
	while(1) {
		ll xet = q.front();
		q.pop();
		if(check(xet*10)==n+1) {
			cout << res.size() << endl;
			for(int i=res.size()-1;i>=0;i--) cout << res[i] << " ";
			cout << endl;
			return;
		}
		q.push(xet*10+6);
		q.push(xet*10+8);
		res.push_back(xet*10+6);
		res.push_back(xet*10+8);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}