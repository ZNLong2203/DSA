#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<ll> v(n);
	map<ll,ll> mp;
	ll kq = 0, ok = 0;
	for(int i=0;i<n;i++) {
		cin >> v[i];
		mp[v[i]]++;
	}
	for(int i=0;i<n;i++) {
		if(mp[v[i]]>1 && ok==0) {
			ok = 1;
			kq = v[i];
		}
	}
	if(ok==1) cout << kq << endl;
	else cout << "NO\n"; 
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}