#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<vector<ll>> v(n+5);
	ll a[n+5][n+5] = {0};
	fflush(stdin);
	for(int i=1;i<=n;i++) {
		string s,xet;
		scanf("\n");
		getline(cin,s);
		stringstream ss(s);
		while(ss >> xet) {
			a[i][stoll(xet)] = 1;
		}
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			cout << a[i][j] << " ";
		} 
		cout << endl;
	}
}

int main() {
	solve();
}