#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,x;
map<ll,ll> mp;

void solve() {
	cin >> n;
	while(n--) {
		cin >> x;
		mp[x]++;
		if(mp[x]==1) cout << x << " ";
	}
}

int main() {
	solve();
}