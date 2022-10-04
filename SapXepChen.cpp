#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	multiset<ll> ms;
	ll cnt = 0;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		ms.insert(x);
		cout << "Buoc " << cnt << ": ";
		for(auto j:ms) cout << j << " ";
		cnt++;
		cout << endl;
	}
}

int main() {
	solve();
}