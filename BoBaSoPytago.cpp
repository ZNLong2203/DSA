#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	sort(v.begin(),v.end());
	for(int i=0;i<n-2;i++) {
		for(int j=i+1;j<n-1;j++) {
			ll xet = v[i]*v[i]+v[j]*v[j];
			xet = sqrt(xet);
			if(v[i]*v[i] + v[j]*v[j] == xet*xet) {
				if(binary_search(v.begin(),v.end(),xet)) {
					cout << "YES\n";
					return;
				}
			}
		}
	}
	cout << "NO\n";
	return;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}