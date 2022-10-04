#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9+7;

ll powMod(ll n,ll k) {
	ll res = 1;
	while(k) {
		if(k%2==1) {
			res*=n;
			res%=mod;
		}
		n*=n;
		n%=mod;
		k/=2;
	}	
	return res;
}

void solve() {
	ll n,k; cin >> n >> k;
	cout << powMod(n,k) << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}