#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,b,e;
vector<vector<ll>> v(100005);
vector<ll> kq;
ll check[100005];
ll parent[100005];

void bfs(ll x) {
	queue<ll> q;
	q.push(x);
	check[x] = 1;
	while(q.size()!=0) {
		ll xet = q.front(); q.pop();
		for(auto i:v[xet]) {
			if(check[i]==0) {
				parent[i] = xet;
				check[i]=1;
				q.push(i);
			}
		}
	}	
}

void findpath(ll b, ll e) {
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
	for(int i=1;i<=n;i++) {
		v[i].clear();
	}
	kq.clear();
	memset(check,0,sizeof(check));
	memset(parent,0,sizeof(parent));
	for(int i=0;i<m;i++) {
		ll x,y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	bfs(b);
	findpath(b,e);
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}