#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k; 
vector<ll> v;
bool cmp(int a,int b) {
	return abs(k-a) < abs(k-b);	
}

void solve() {
	cin >> n >> k;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		v.push_back(x);
	}
	stable_sort(v.begin(),v.end(),cmp);
	for(int i=0;i<n;i++) cout << v[i] << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
		v.clear();
	}
}