#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k;
vector<ll> v;
ll a[10000]={0};
void Try(int i,ll cnt) {
	for(int j=i;j<v.size();j++) {
		a[cnt] = v[j];
		if(cnt==k-1) {
			for(int t=0;t<k;t++) {
				cout << a[t] << " ";
			}
			cout << endl;
		}	else Try(j+1,cnt+1);
	}
}

void solve() {
	cin >> n >> k;
	set<ll> se;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		se.insert(x);
	}
	for(auto i:se) v.push_back(i);
	ll cnt = 0;
	Try(0,cnt);
}

int main() {
	solve();
}