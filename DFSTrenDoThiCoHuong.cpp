#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,k;
vector<vector<ll>> v(100005);
bool check[100005];
void dfs(ll x) {
	cout << x << " ";
	check[x]=true;
	for(auto i:v[x]) {
		if(check[i]==0) dfs(i);
	}
}
void solve() {
	cin >> n >> m >> k;
	memset(check,false,sizeof(check));
	for(int i=1;i<=n;i++) {
		v[i].clear();
	}
	for(int i=0;i<m;i++) {
		ll x,y;
		cin >> x >> y;
		v[x].push_back(y);
	}
//	for(int i=1;i<=n;i++) {
//		sort(v[i].begin(),v[i].end());
//	}
	dfs(k);
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}