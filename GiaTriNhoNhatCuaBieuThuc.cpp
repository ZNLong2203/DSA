#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(ll a, ll b) {
	return a>b;	
}

void solve() {
	ll n; cin >> n;
	ll sum = 0;
	vector<ll> v1(n), v2(n);
	for(int i=0;i<n;i++) cin >> v1[i];
	for(int i=0;i<n;i++) cin >> v2[i];
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end(),cmp);
	for(int i=0;i<n;i++) {
		sum+=v1[i]*v2[i];
	}
	cout << sum << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}
