#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	ll sum = 0, kq = 0;
	for(int i=0;i<n;i++) {
		sum+=v[i];
		if(sum<0) sum = 0;
		if(sum>kq) kq = sum;
	}
	cout << kq << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}