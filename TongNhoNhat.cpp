#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	ll sum = 0;
	sort(v.begin(),v.end());
	vector<ll> odd, even;
	string sodd = "";
	string seven = "";
	for(int i=0;i<n;i++) {
		if(i%2==0) seven += to_string(v[i]);
		else sodd += to_string(v[i]);
	}
	cout << stoll(seven) + stoll(sodd) << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}