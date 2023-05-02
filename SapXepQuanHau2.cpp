#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll cnt = 0, sum = 0, ans = 0;
ll a[100], b[100], cot[100], hang[100], mp[100][100];
void Try(int i) {
	if(i>8) return;
	for(int j=1;j<=8;j++) {
		if(cot[j]==0 && hang[i]==0 && a[i+j-1]==0 && b[i-j+8]==0) {
			cot[j] = 1;
			hang[i] = 1;
			a[i+j-1] = 1;
			b[i-j+8] = 1;
			sum+=mp[i][j];
			if(i==8) {
				cnt++;
				ans=max(ans,sum);
			}
			else Try(i+1);
			cot[j] = 0;
			hang[i] = 0;
			a[i+j-1] = 0;
			b[i-j+8] = 0;
			sum-=mp[i][j];
		}
	}
}

void solve() {
	cnt = 0, sum = 0, ans = 0;
	for(int i=1;i<=8;i++) {
		for(int j=1;j<=8;j++) {
			cin >> mp[i][j];
		}
	}
	Try(1);
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}