#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,b,e;
vector<vector<ll>> v(100005);
ll check[100005];
ll parent[100005];
vector<ll> kq;

void dfs(ll x) {
	if(check[e]==1) return;
	check[x] = 1;
	for(auto i:v[x]) {
		if(check[i]==0) {
			dfs(i);
			parent[i] = x;
		}
	}	
}

void findpath(ll b, ll e) {
	kq.clear();
	if(check[e]==0) {
		cout << "-1\n";
		return;
	}	
	while(b!=e) {
		kq.push_back(e);
		e = parent[e];
	}
	kq.push_back(e);
	reverse(kq.begin(),kq.end());
	for(auto x:kq) cout << x << " ";
	cout << endl;
}

void solve() {
	cin >> n >> m >> b >> e;
	memset(check,0,sizeof(check));	
	memset(parent,0,sizeof(parent));
	for(int i=1;i<=n;i++) {
		v[i].clear();
	}
	for(int i=0;i<m;i++) {
		ll x,y;
		cin >> x >> y;
		v[x].push_back(y);
	}
	dfs(b);
	findpath(b,e);
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}