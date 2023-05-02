#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n = 0;
void check(string s) {
	if(s[0]!='H' || s[n-1]!='A') return;
	for(int i=0;i<n-1;i++) {
		if(s[i]=='H' && s[i+1]=='H') return;
	}	
	cout << s << endl;
}

void Try(string s) {
	if(s.size()==n) check(s);
	else {
		Try(s+'A');
		Try(s+'H');	
	}
}

void solve() {
	cin >> n;
	string s = "";
	Try(s);
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}