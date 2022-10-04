#include<bits/stdc++.h>
#define ll long long
using namespace std;

char c; ll n;
void Try(int pos, ll cnt, string s) {
	for(int i=pos;i<=c-'A';i++) {
		if(cnt==n) {
			cout << s << endl;
			return;
		}
		char xet = 'A'+i;
		Try(i,cnt+1,s+xet);
	}	
}

void solve() {
	cin >> c >> n;
	ll cnt = 0;
	string s = "";
	Try(0,cnt,s);
}

int main() {
	solve();
}