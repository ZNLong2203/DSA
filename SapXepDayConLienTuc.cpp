#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	vector<ll> xet(v);
	sort(xet.begin(),xet.end());
	int begin,end;
	for(int i=0;i<n;i++) {
		if(xet[i]!=v[i]) {
			begin = i+1;
			break;
		}
	}
	for(int i=n-1;i>=0;i--) {
		if(xet[i]!=v[i]) {
			end = i+1;
			break;
		}
	}
	cout << begin << " " << end << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}