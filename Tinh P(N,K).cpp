#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9+7;
void solve() {
	ll n,k;
	cin >> n >> k;
	if(k > n) cout << "0\n";
	else if(k==1) cout << "1\n";
	else {
		ll res = 1;
		for(int i=n-k+1;i<=n;i++) {
			res = (res*i)%mod;
		}
		cout << res << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}