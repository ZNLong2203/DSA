#include<bits/stdc++.h>
#define ll long long
using namespace std;

map<ll,ll> mp;
vector<ll> v;
bool cmp(ll a,ll b) {
	if(mp[a]==mp[b]) return a<b;
	else return mp[a]>mp[b];	
}

void solve() {
	ll n; cin >> n;
	mp.clear();
	v.clear();
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		mp[x]++;
	}
	for(auto x:mp) v.push_back(x.first);
	sort(v.begin(),v.end(),cmp);
	for(auto x:v) {
		while(mp[x]) {
			cout << x << " ";
			mp[x]--;
		}
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}