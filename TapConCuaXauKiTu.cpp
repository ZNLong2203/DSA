#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n;
string s;
void Try(ll pos, string xet) {
	for(int i=pos;i<n;i++) {
		cout << xet+s[i] << " ";
		Try(i+1,xet+s[i]);
	}
}

void solve() {
	cin >> n;
	cin >> s;
	string xet="";
	Try(0,xet);
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}