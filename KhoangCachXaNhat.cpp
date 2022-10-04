#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<ll,ll> a, pair<ll,ll> b) {
	return a.first < b.first;
}

void solve() {
	ll n; cin >> n;
	vector<pair<ll,ll>> v;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		v.push_back(make_pair(x,i));
	}
	sort(v.begin(),v.end(),cmp);
	ll mn = v[0].first, idx = v[0].second;
	ll kq = -1, ok = 0;
	for(int i=1;i<n;i++) {
		if(v[i].first > mn) {
			if((v[i].second-idx > kq) && (v[i].second > idx)) {
				kq = v[i].second-idx;
				ok = 1;
			}
		}	
		if(v[i].first < mn) mn = v[i].first;
		if(v[i].second < idx) idx = v[i].second;
	}
	if(ok==0) cout << "-1\n";
	else cout << kq << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}