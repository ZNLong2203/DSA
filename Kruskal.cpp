#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m;
ll parent[1111], sz[1111];

struct edge{
	ll x,y,w;
};

vector<edge> vst;

bool cmp(edge a, edge b) {
	return a.w < b.w;	
}

void init() {
	for(int i=1;i<=n;i++) parent[i] = i;	
}

ll Find(ll u) {
	if(u == parent[u]) return u;
	else return parent[u] = Find(parent[u]);
}

ll Union(ll u, ll v) {
	u = Find(u);
	v = Find(v);
	if(u == v) return 0;
	if(sz[u] < sz[v]) {
		parent[u] = v;
		sz[v] += sz[u];
	}	
	else {
		parent[v] = u;
		sz[u] += sz[v];
	}
	return 1;
}

void kruskal() {
	sort(vst.begin(),vst.end(),cmp);
	int d = 0, cnt = 0;
	for(int i=0;i<m;i++) {
		if(cnt == n-1) break;
		ll u = vst[i].x;
		ll v = vst[i].y;
		if(Union(u, v)) {
			cnt++;
			d += vst[i].w;
		}
	}
	cout << d << endl;
}

void solve() {
	cin >> n >> m;
	vst.clear();
	for(int i=0;i<m;i++) {
		ll x,y,w;
		cin >> x >> y >> w;
		vst.push_back({x,y,w});
	}
	init();
	kruskal();
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}