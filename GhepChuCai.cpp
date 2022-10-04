#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll check(string s) {
	for(int i=1;i<s.size()-1;i++) {
		if(s[i]=='A' || s[i]=='E') {
			if(s[i+1]!='A' && s[i+1]!='E' && s[i-1]!='A' && s[i-1]!='E') return 0;
		}	
	}
	return 1;
}

void solve() {
	char c; cin >> c;
	string s = "";
	for(int i=0;i<=c-'A';i++) {
		s+='A'+i;
	}	
	do {
		if(check(s)) cout << s << endl;
	}	while(next_permutation(s.begin(),s.end()));
}

int main() {
	solve();
}