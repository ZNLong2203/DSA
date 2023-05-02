#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s; 
	cin >> s;
	ll check = 0;
	for(int i=s.size()-1;i>=0;i--) {
		if(s[i]=='1') {
			check = 1;
			s[i]='0';
			for(int j=i+1;j<s.size();j++) s[j]='1';
			break;
		}
	}
	if(check==0) {
		for(int i=0;i<s.size();i++) cout << "1";
	}	else cout << s;
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}