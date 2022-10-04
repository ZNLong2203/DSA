#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	ll cnt = 1;
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(v[i]>v[j]) swap(v[i],v[j]);
		}
		cout << "Buoc " << cnt << ": ";
		for(int k=0;k<n;k++) cout << v[k] << " ";
		cout << endl;
		cnt++;
	}
}

int main() {
	solve();
}