#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,k;
vector<vector<ll>> v(100005);
ll check[100005];

void bfs(ll x) {
	queue<ll> q;
	q.push(x);
	check[x] = 1;
	while(q.size()!=0) {
		ll xet = q.front(); q.pop();
		cout << xet << " ";
		for(auto i:v[xet]) {
			if(check[i]==0) {
				check[i]=1;
				q.push(i);
			}
		}
	}	
}

void solve() {
	cin >> n >> m >> k;
	memset(check,0,sizeof(check));
	for(int i=1;i<=n;i++) {
		v[i].clear();
	}	
	for(int i=0;i<m;i++) {
		ll x,y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	bfs(k);
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}