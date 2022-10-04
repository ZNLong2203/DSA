#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k;
vector<string> v;
vector<string> kq;

void Try(int i, int cnt) {
	for(int j=i;j<=v.size();j++) {
		if(cnt==k) {
			for(auto x:kq) cout << x << " ";
			cout << endl;
			break;
		}	else if(cnt<k && j<v.size()) {
			kq.push_back(v[j]);
			Try(j+1,cnt+1);
			kq.pop_back();
		}
	}	
}

void solve() {
	cin >> n >> k;
	set<string> se;
	for(int i=0;i<n;i++) {
		string x; cin >> x;
		se.insert(x);
	}
	for(auto x:se) v.push_back(x);
	Try(0,0);
}

int main() {
	solve();
}