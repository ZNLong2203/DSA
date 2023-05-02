#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k,s,kq=0;

void Try(ll pos, ll cnt, ll sum) {
	for(int i=pos;i<=n;i++) {
		cnt++;
		sum+=i;
		if(cnt==k && sum==s) kq++;
		Try(i+1,cnt,sum);
		cnt--;
		sum-=i;
	}
}

void solve() {
	while(cin >> n >> k >> s) {
		if(n==0 && k==0 && s==0) return;
		kq = 0;
		Try(1,0,0);
		cout << kq << endl;	
	}
}

int main() {
	solve();
}