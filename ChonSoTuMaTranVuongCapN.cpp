#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k;
ll a[100][100];
ll visited[100];
vector<string> res;
void Try(ll pos, string s, ll sum) {
	for(int j=1;j<=n;j++) {
		if(pos>n) return;
		sum+=a[pos][j];
		if(sum==k && pos==n && visited[j]==0) {
//			s+=to_string(j);
//			cout << sum << endl;
			res.push_back(s+to_string(j));
		} 
		if(visited[j]==0) {
			visited[j]=1;
			Try(pos+1,s+to_string(j)+" ",sum);
			visited[j]=0;	
		}
		sum-=a[pos][j];
	}
}

void solve() {
	cin >> n >> k;
	res.clear();
	memset(a,0,sizeof(a));
	memset(visited,0,sizeof(visited));
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			cin >> a[i][j];
		}
	}
	string s="";
	Try(1,s,0);
	cout << res.size() << endl;
	for(auto x:res) cout << x << endl;
}

int main() {
	solve();
}