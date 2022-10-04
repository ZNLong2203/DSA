#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	multiset<ll> ms;
	vector<string> vs;
	string s = "";
	ll cnt = 0;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		ms.insert(x);
		s = "";
		for(auto j:ms) s+=to_string(j) + " ";
		cnt++;
		vs.push_back(s);
	}
	for(int i=vs.size()-1;i>=0;i--) {
		cout << "Buoc " << cnt-1 << ": ";
		cout << vs[i] << endl;
		cnt--;
	}
}

int main() {
	solve();
}