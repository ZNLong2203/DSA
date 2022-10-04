#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m;
vector<string> v;
vector<string> a;
void Try(int i,ll cnt) {
	for(int j=i;j<v.size();j++) {
		a.push_back(v[j]);
		if(cnt==m-1) {
			for(int k=0;k<m;k++) {
				cout << a[k] << " ";
			}
			cout << endl;
		}	else Try(j+1,cnt+1);
		a.pop_back();
	}
}

void solve() {
	cin >> n >> m;
	set<string> se;
	for(int i=0;i<n;i++) {
		string x; cin >> x;
		se.insert(x);
	}
	for(auto x:se) v.push_back(x);
	ll cnt = 0;
	Try(0,cnt);
}

int main() {
	solve();
}