#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<ll,ll> p1, pair<ll,ll> p2) {
	return p1.second < p2.second;
}

void solve() {
	ll n; cin >> n;
	vector<pair<ll,ll>> p;
	vector<ll> v1(n), v2(n);
	for(int i=0;i<n;i++) {
		cin >> v1[i];
	}
	for(int i=0;i<n;i++) {
		cin >> v2[i];
	}
	for(int i=0;i<n;i++) {
		p.push_back(make_pair(v1[i], v2[i]));
	}
	sort(p.begin(),p.end(),cmp);
	ll cnt = 1, xet = p[0].second;
	for(int i=1;i<n;i++) {
		if(xet<=p[i].first) {
			cnt++;
			xet = p[i].second;
		}
	}
	cout << cnt << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}

