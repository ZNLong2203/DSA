#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n;
ll a[100000];
vector<ll> v;
vector<vector<string>> vs;

ll prime(ll x) {
	for(int i=2;i<=sqrt(n);i++) {
		if(x%i==0) return 0;
	}
	if(n<2) return 0;
	else return 1;
}

ll Try(ll pos, ll sum) {
	for(int i=pos;i<n;i++) {
		sum+=a[i];
		v.push_back(a[i]);
		if(prime(sum)) {
			vector<ll> xet(v.begin(),v.end());
			sort(xet.begin(),xet.end(),greater<ll>());
			string s = "";
			for(auto x:xet) {
				s+=to_string(x)+" ";
			}
			cout << s << endl;
		}	else Try(i+1,sum);
		sum-=a[i];
		v.pop_back();
	}
}

void solve() {
	cin >> n;
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	Try(0,0);
//	for(auto x:vs) cout << x << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}