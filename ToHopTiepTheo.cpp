#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,k,check = 0,cnt = 0;
	cin >> k >> n;
	vector<ll> v(n);
	set<ll> se;
	for(int i=0;i<n;i++) {
		cin >> v[i];
		se.insert(v[i]);
	}
	for(int i=n-1;i>=0;i--) {
		if(v[i]<(k-n+i+1)) {
			check = 1;
			v[i]++;
			for(int j=i+1;j<n;j++) v[j]=v[j-1]+1;
			break;
		}
	}
	if(check==0) {
		cout << n << endl;
		return;
	}
	for(int i=0;i<n;i++) {
		if(!se.count(v[i])) cnt++;
	}
	cout << cnt << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}