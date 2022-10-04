#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k;
list<ll> a;

void solve() {
	cin >> n;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		a.push_back(x);	
	}
	cin >> k;
	a.remove(k);
	for(auto i:a) cout << i << " ";
	cout << endl;
}

int main() {
	solve();
}