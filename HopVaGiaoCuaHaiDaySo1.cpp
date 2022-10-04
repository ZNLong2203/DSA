#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,m,x;
	cin >> n >> m;
	set<ll> se1,se2,se3;
	for(int i=0;i<n;i++) {
		cin >> x;
		se1.insert(x);
		se2.insert(x);
	}
	for(int i=0;i<m;i++) {
		cin >> x;
		se1.insert(x);
		if(se2.count(x)) se3.insert(x);
	}
	for(auto a:se1) cout << a << " ";
	cout << endl;
	for(auto a:se3) cout << a << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}