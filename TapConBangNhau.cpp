#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n;
ll sum = 0, ok = 0;
vector<ll> v;
void Try(int i, ll xet) {
	for(int j=i;j<n;j++) {
		if(ok==1) return;
		if(xet + v[j] == sum) {
			ok = 1;
			return;
		}	else if(xet + v[j] < sum) Try(j+1, xet+v[j]);
	}
}

void solve() {
	cin >> n;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		v.push_back(x);
		sum += x;
	}
	if(sum%2!=0) {
		cout << "NO\n";
		return;
	}	else sum/=2;
	sort(v.begin(),v.end());
	ll xet = 0;
	Try(0,xet);
	if(ok==1) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		v.clear();
		sum = 0;
		ok = 0;
		solve();
	}
}