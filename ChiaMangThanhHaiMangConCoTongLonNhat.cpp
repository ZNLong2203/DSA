#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n,k;
	cin >> n >> k;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	sort(v.begin(),v.end());
	ll mn = 0, mx = 0;
	k = min(k,n-k);
	for(int i=0;i<k;i++) mn+=v[i];
	for(int i=k;i<n;i++) mx+=v[i];
	cout << mx-mn << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}