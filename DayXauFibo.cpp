#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,k;
	cin >> n >> k;
	ll a[n+5]={0};
	a[1] = 1;
	a[2] = 1;
	for(int i=3;i<=n;i++) {
		a[i]=a[i-1]+a[i-2];
	}
	while(1) {
		cout << n << " ";
		if(n==1) {
			cout << "A\n";
			return;
		}	else if(n==2) {
			cout << "B\n";
			return;
		}	else if(k > a[n-2]) {
			k-=a[n-2];
			n--;
		}	else n-=2;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) { 
		solve();
	}
}