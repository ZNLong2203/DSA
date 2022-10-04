#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, k;
	cin >> n >> k;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	sort(v.begin(),v.end());
	ll cnt = 0;
	for(int i=0;i<n-2;i++) {
		for(int j=i+1;j<n-1;j++) {
			auto it = lower_bound(v.begin()+j+1,v.end(),k-v[i]-v[j]-1);
			ll idx = it - v.begin();
			if(*it== k-v[i]-v[j]-1) cnt+=idx-j;
			else if(v[idx-1]<k-v[i]-v[j] && idx-1>j) cnt+=idx-1-j;
		}
	}
	cout << cnt << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}