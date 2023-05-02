#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k;
ll kq = 0;
vector<ll> v(n+10);
void Try(ll cnt,ll pos) {
	for(int i=pos+1;i<=n;i++) {
		if(v[i]>v[pos]) {
			cnt++;
			if(cnt==k) kq++;
			else Try(cnt,i);
			cnt--;
		}
	}
}

void solve() {
	cin >> n >> k;
	v.clear();
	v[0]=0;
	for(int i=1;i<=n;i++) cin >> v[i];
	Try(0,0);
	cout << kq << endl;
}

int main() {
	solve();
}