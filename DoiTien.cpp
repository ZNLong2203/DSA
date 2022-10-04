#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	ll a[]={1,2,5,10,20,50,100,200,500,1000};
	int xet = 9;
	int cnt = 0;
	while(xet>=0 && n>0) {
		if(n/a[xet]>=1) {
			cnt+=n/a[xet];
			n-=(n/a[xet]) * a[xet];
		}	else xet--;
	}
	cout << cnt << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}