#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	ll mn = 0, idx = 0, cnt = 1;
	for(int i=0;i<n-1;i++) {
		mn = v[i];
		for(int j=i+1;j<n;j++) {
			if(mn > v[j]) {
				mn = v[j];
				idx = j;
			}
		}
		swap(v[i],v[idx]);
		cout << "Buoc " << cnt << ": ";
		for(int k=0;k<n;k++) {
			cout << v[k] << " ";
		}
		cnt++;
		cout << endl;
	}
}

int main() {
	solve();
}