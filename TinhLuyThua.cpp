#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
ll poww(ll n, ll k) {
	if(k==1) return n;
	ll x = poww(n,k/2);
	if(k%2==0) return (x*x)%mod;
	else return (((x*x)%mod)*n)%mod;
}

void solve() {
	ll ok = 1;
	while(ok) {
		ll n,k;
		cin >> n >> k;
		if(n==0 && k==0) {
			return;
		}	else if(k==0) {
			cout << "1" << endl;
		}	else cout << poww(n,k) << endl;	
	}
}

int main() {
	solve();
}