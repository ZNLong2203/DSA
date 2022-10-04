#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	ll cnt = 1, check = 1;
	vector<ll> v(n);
	vector<string> vs;
	for(int i=0;i<n;i++) cin >> v[i];
	for(int i=0;i<n-1;i++) {
		check = 0;
		for(int j=0;j<n-1;j++) {
			if(v[j] > v[j+1]) {
				swap(v[j], v[j+1]);
				check = 1;
			}
		}
		string s = "";
		if(check==0) break;
		for(int i=0;i<n;i++) {
			s+=to_string(v[i]) + " ";
		}
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