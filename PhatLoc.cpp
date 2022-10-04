#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n;
int ok = 1;
int a[100005]={0};

void init() {
	for(int i=1;i<=n;i++) a[i]=6;
}

int check() {
	if(a[1]!=8 || a[n]!=6) return 0;
	int cnt = 0;
	for(int i=1;i<=n;i++) {
		if(a[i]==8 && a[i+1]==8) return 0;
		if(a[i]==6) {
			cnt++;
			if(cnt>3) return 0;
		}	else cnt = 0;
	}
	return 1;
}
	
void solve() {
	while(ok) {
		if(a[0]!=0) ok = 0;
		for(int i=n-1;i>=0;i--) {
			if(a[i]==6) {
				a[i]=8;
				break;
			}	else a[i]=6;
		}
		if(check()) {
			for(int i=1;i<=n;i++) {
				cout << a[i];
			}
			cout << endl;
		}
	}
}

int main() {
	cin >> n;
	init();
	solve();
}