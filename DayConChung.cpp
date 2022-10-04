#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,m,k,x;
	cin >> n >> m >> k;
	map<ll,ll> mp1, mp2, mp3;
	for(int i=0;i<n;i++) {
		cin >> x;
		mp1[x]++;
	}
	for(int i=0;i<m;i++) {
		cin >> x;
		if(mp1[x]!=0) {
			mp1[x]--;
			mp2[x]++;
		}
	}
	for(int i=0;i<k;i++) {
		cin >> x;
		if(mp2[x]!=0) {
			mp2[x]--;
			mp3[x]++;
		}
	}
	if(mp3.size()!=0) {
		for(auto a:mp3) {
			for(int i=0;i<a.second;i++) {
				cout << a.first << " ";
			}
		}
	}	else cout << "NO";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}