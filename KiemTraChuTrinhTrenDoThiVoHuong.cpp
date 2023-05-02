#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m;
ll parent[1111];
ll sz[1111];
vector<pair<ll,ll>> vp;

void init() {
	for(int i=1;i<=n;i++) {
		parent[i] = i;
	}
}

ll Find(ll u) {
	if(u == parent[u]) return u;
	else return parent[u] = Find(parent[u]);	
}

ll Union(ll u, ll v) {
	u = Find(u);
	v = Find(v);
	if(u == v) return 1;
	if(sz[u] < sz[v]) {
		parent[u] = v;
		sz[v] += sz[u];
	}	
	else {
		parent[v] = u;
		sz[u] += sz[v];	
	}
	return 0;
}

void solve() {
	cin >> n >> m;
	init();
	vp.clear();
	for(int i=0;i<m;i++) {
		ll x,y;
		cin >> x >> y;
		vp.push_back({x,y});
	}	
	for(auto x:vp) {
		if(Union(x.first,x.second)) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}