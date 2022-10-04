#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k;
int cnt = 0;
vector<ll> v;
vector<string> vs;

void Try(ll pos, ll sum, string s) {
	if(sum==k) {
		vs.push_back(s);
		cnt++;
		return;
	}
	for(ll i=pos;i<n;i++) {
		if(sum+v[i]<=k) {
			Try(i+1, sum+v[i], s + to_string(v[i]) + " ");
		}
	}
}

int main() {
	cin >> n >> k;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		v.push_back(x);
	}
	string tmp = "";
	sort(v.begin(),v.end());
	Try(0,0,tmp);
	for(int i=vs.size()-1;i>=0;i--) {
		cout << vs[i] << "\n";
	}
	cout << cnt << endl;
}