#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n, cnt = 0;
ll a[100], b[100], cot[100], hang[100];
void Try(int i) {
	for(int j=1;j<=n;j++) {
		if(cot[j]==0 && hang[i]==0 && a[i-j+n]==0 && b[i+j-1]==0) {
			cot[j] = 1;
			hang[i] = 1;
			a[i-j+n] = 1;
			b[i+j-1] = 1;
			if(i==n) cnt++;
			else Try(i+1);
			cot[j] = 0;
			hang[i] = 0;
			a[i-j+n] = 0;
			b[i+j-1] = 0;	
		}
	}	
}

void solve() {
	cin >> n;
	cnt = 0;
	Try(1);
	cout << cnt << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}