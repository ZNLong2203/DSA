#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> v;
ll n,k,cnt = 0;

void Try(int i, ll sum, string s) {
	for(int j=i;j<n;j++) {
		if(sum + v[j] < k) {
			Try(j+1,sum+v[j],s+to_string(v[j])+" ");
		}	else if(sum + v[j] == k) {
			cout << s + to_string(v[j]) + "] ";
			cnt++;
		}	
	}
}

void solve() {
	v.clear();
	cin >> n >> k;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		v.push_back(x);
	}	
	sort(v.begin(),v.end());
	ll sum = 0;
	string s = "[";
	Try(0,sum,s);
	if(cnt==0) cout << "-1\n";
	else cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cnt = 0;
		solve();
	}
}