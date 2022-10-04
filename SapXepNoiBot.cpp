#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	ll cnt = 1, check = 1;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	for(int i=0;i<n-1;i++) {
		check = 0;
		for(int j=0;j<n-1;j++) {
			if(v[j] > v[j+1]) {
				swap(v[j], v[j+1]);
				check = 1;
			}
		}
		if(check==0) return;
		cout << "Buoc " << cnt << ": ";
		for(int i=0;i<n;i++) {
			cout << v[i] << " "; 
		}
		cnt++;
		cout << endl;
	}
}

int main() {
	solve();
}