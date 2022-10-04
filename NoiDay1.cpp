#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,x; cin >> n;
	ll xet1,xet2;
	priority_queue<int, vector<int>, greater<int>> pq;
	for(int i=0;i<n;i++) {
		cin >> x;
		pq.push(x);
	}
	ll kq = 0;
	while(pq.size()>1) {
		xet1 = pq.top();
		pq.pop();
		xet2 = pq.top();
		pq.pop();
		pq.push(xet1+xet2);
		kq+=xet1+xet2;
	}
	cout << kq << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}