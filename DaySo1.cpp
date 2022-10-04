#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,x; cin >> n;
	queue<ll> q;
	for(int i=0;i<n;i++) {
		cin >> x;
		q.push(x);
	}
	for(int i=1;i<=n;i++) {
		cout << "[";
		for(int j=n-i;j>=0;j--) {
			x = q.front();
			cout << x;
			if(j!=0) cout << " ";
			q.pop();
			x+=q.front();
			if(j!=0) q.push(x);
		}
		cout << "]\n";	
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}