#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<ll> v(n);
	vector<string> vs;
	for(int i=0;i<n;i++) cin >> v[i];
	ll cnt = 1;
	string s = "";
	for(int i=0;i<n-1;i++) {
		s = "";
		for(int j=i+1;j<n;j++) {
			if(v[i]>v[j]) swap(v[i],v[j]);
		}
		for(int k=0;k<n;k++) s+=to_string(v[k]) + " ";
		cnt++;
		vs.push_back(s);
	}
	for(int i=vs.size()-1;i>=0;i--) {
		cout << "Buoc " << cnt-1 << ": " << vs[i] << endl;
		cnt--;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}