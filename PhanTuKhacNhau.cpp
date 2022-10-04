#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<ll> v1(n);
	vector<ll> v2(n-1);
	for(int i=0;i<n;i++) cin >> v1[i];
	for(int i=0;i<n-1;i++) cin >> v2[i];
	for(int i=0;i<n-1;i++) {
		if(v1[i]!=v2[i]) {
			cout << i+1 << endl;
			return;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}