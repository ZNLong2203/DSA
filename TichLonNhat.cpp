#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	sort(v.begin(),v.end());
	ll xet1 = v[0]*v[1]*v[v.size()-1];
	ll xet2 = v[0]*v[v.size()-1]*v[v.size()-2];
	ll xet3 = v[0]*v[1]*v[2];
	ll xet4 = v[v.size()-1]*v[v.size()-2]*v[v.size()-3];
	ll xet5 = v[0]*v[1];
	ll xet6 = v[v.size()-1]*v[v.size()-2];
	ll kq = max({xet1,xet2,xet3,xet4,xet5,xet6});
	cout << kq << endl;
}

int main() {
	solve();
}