#include<bits/stdc++.h>
#define ll long long
using namespace std;

int visited[10000];
vector<vector<ll>> v(10000);
void dfs(ll n) {
	visited[n]=1;
	for(auto x:v[n]) {
		if(visited[x]==0) {
			visited[x]=1;
			dfs(x);
		}
	}
}

void solve() {
	ll n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++) {
		v[i].clear();
	}
	for(int i=0;i<m;i++) {
		ll x,y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i=1;i<=n;i++) {
		sort(v[i].begin(),v[i].end());
	}
	ll xet; cin >> xet;
	while(xet--) {
		ll a,b;
		cin >> a >> b;
		memset(visited,0,sizeof(visited));
		dfs(a);	
		if(visited[b]==1) cout << "YES\n";
		else cout << "NO\n";
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}