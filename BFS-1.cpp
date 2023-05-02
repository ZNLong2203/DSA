#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	stack<pair<ll,ll>> st;
	if(n<0) st.push({n*-1,1});
	else st.push({n,0});
	while(st.size()!=0) {
		ll f = st.top().first;
		ll s = st.top().second;
		if(f==0) {
			cout << s << endl;
			return;
		}
		st.pop();
		if(f%2==0) st.push({f/=2,s+1});
		if(sqrt(f)*sqrt(f)==f) {
			ll a = sqrt(f);
			st.push({a,s+1});
		}
		st.push({f-1,s+1});
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}