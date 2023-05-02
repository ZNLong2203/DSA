#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll a,b;
	cin >> a >> b;
	queue<pair<ll,ll>> q;
	map<ll,ll> mp;
	q.push({a,0});
	while(q.size()!=0) {
		ll f = q.front().first;
		ll s = q.front().second;
		q.pop();
		if(f==b) {
			cout << s << endl;
			return;
		}
		if(f<=b && !mp[f*2]) {
			mp[f*2]++;
			q.push({f*2,s+1});
		}
		if(f>=1 && !mp[f-1]) {
			mp[f-1]++;
			q.push({f-1,s+1});
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}