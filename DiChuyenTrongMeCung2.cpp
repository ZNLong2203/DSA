#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n;
ll a[100][100];
ll visited[100][100];
vector<string> kq;

void Try(int i, int j, string s) {
	if(i==n && j==n && a[i][j]==1) {
		kq.push_back(s);
	}
	if(i+1<=n && a[i+1][j]==1 && visited[i+1][j]==0) {
		visited[i+1][j]=1;
		Try(i+1,j,s+'D');
		visited[i+1][j]=0;
	}
	if(j+1<=n && a[i][j+1]==1 && visited[i][j+1]==0) {
		visited[i][j+1]=1;
		Try(i,j+1,s+'R');
		visited[i][j+1]=0;
	}
	if(j-1>=1 && a[i][j-1]==1 && visited[i][j-1]==0) {
		visited[i][j-1]=1;
		Try(i,j-1,s+'L');
		visited[i][j-1]=0;
	}
	if(i-1>=1 && a[i-1][j]==1 && visited[i-1][j]==0) {
		visited[i-1][j]=1;
		Try(i-1,j,s+'U');
		visited[i-1][j]=0;
	}	
}

void solve() {
	cin >> n;
	kq.clear();
	memset(visited,0,sizeof(visited));
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			cin >> a[i][j];
		}
	}
	if(a[n][n]==0) {
		cout << "-1\n";
		return;
	}
	visited[1][1]=1;
	string s = "";
	Try(1,1,s);
	if(kq.size()==0) {
		cout << "-1\n";
		return;
	}
	sort(kq.begin(),kq.end());
	for(auto x:kq) cout << x << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}