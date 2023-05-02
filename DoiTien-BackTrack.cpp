#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,s,flag=0;
ll a[35]={0};
void Try(ll pos,ll sum,ll cnt) {
	if(sum>s) return;
	if(flag==1) return;
	for(int i=pos;i<n;i++) {
		sum+=a[i];
		cnt++;
		if(sum==s) {
			cout << cnt << endl;
			flag = 1;
			return;
		}	else Try(i+1,sum,cnt);
		sum-=a[i];
		cnt--;
	}
}

void solve() {
	cin >> n >> s;
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n,greater<ll>());
	Try(0,0,0);
	if(flag==0) cout << "-1\n";
}

int main() {
	solve();
}