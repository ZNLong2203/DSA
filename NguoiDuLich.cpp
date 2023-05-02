#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n, res = 1000000;
ll a[100][100];
ll visited[100]={0};

void Try(ll pos, ll cnt, ll sum) {
	if(sum > res) return;
	if(cnt==n-1) res = min(res, sum + a[pos][1]);
	for(int i=1;i<=n;i++) {
		if(visited[i]==0) {
			visited[i] = 1;
			Try(i,cnt+1,sum+a[pos][i]);
			visited[i] = 0;
		}
	}
}
	
void solve() {
	cin >> n;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			cin >> a[i][j];
		}
	}
	visited[1]=1;
	Try(1,0,0);
	cout << res << endl;	
}

int main() {
	solve();
}