#include<bits/stdc++.h>
#define ll long long
using namespace std;

int a[100][100]={0};
ll n, check = 0;

void Try(int i, int j, string s) {
	if(i==n && j==n && a[i][j]==1) {
		cout << s << " ";
		check = 1;
		return;
	}	
	if(i+1<=n && a[i+1][j]==1) {
		Try(i+1,j,s+"D");
	}	
	if(j+1<=n && a[i][j+1]==1) {
		Try(i,j+1,s+"R");
	}
}

void solve() {
	cin >> n;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			cin >> a[i][j];
		}
	}
	string s = "";
	if(a[1][1]==1) Try(1,1,s);
	if(check==0) {
		cout << "-1\n";
		return;
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		check = 0;
		solve();
	}
}