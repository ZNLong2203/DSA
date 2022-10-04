#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<string> v;
int a[100]={0};
int n;

void init() {
	for(int i=1;i<=n;i++) a[i] = i;
}

void solve() {
	do {
		string s = "";
		for(int i=1;i<=n;i++) {
			s+=to_string(a[i]);
		}
		v.push_back(s);
	}	while(next_permutation(a+1,a+n+1));
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		init();
		solve();
		for(int i=v.size()-1;i>=0;i--) cout << v[i] << " ";
		cout << endl;
		v.clear();
	}
}