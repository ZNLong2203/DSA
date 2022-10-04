#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,m;
	cin >> n >> m;
	vector<ll> v1(n), v2(m);
	for(int i=0;i<n;i++) cin >> v1[i];
	for(int i=0;i<m;i++) cin >> v2[i];
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	cout << v1[v1.size()-1] * v2[0] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}