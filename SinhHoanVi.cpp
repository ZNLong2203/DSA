#include<bits/stdc++.h>
#define ll long long
using namespace std;

int a[100]={0};
int n;

void init() {
	for(int i=1;i<=n;i++) a[i] = i;
}

void solve() {
	do {
		for(int i=1;i<=n;i++) {
			cout << a[i];
		}
		cout << " ";
	}	while(next_permutation(a+1,a+n+1));
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		init();
		solve();
		cout << endl;
	}
}