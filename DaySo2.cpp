#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,x; cin >> n;
	queue<ll> q;
	vector<string> v;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		q.push(x);
	}
	for(int i=0;i<n;i++) {
		string s = "[";
		for(int j=n-i-1;j>=0;j--) {
			x = q.front();
			s+=to_string(x);
			if(j!=0) s+=" ";
			q.pop();
			x+=q.front();
			if(j!=0) q.push(x);	
		}
		s+="]";
		v.push_back(s);
	}
	for(int i=n-1;i>=0;i--) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}