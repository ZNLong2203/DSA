#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s; cin >> s;
	stack<char> st;
	ll cnt = 0;
	for(int i=0;i<s.size();i++) {
		if(st.size()!=0) {
			if(s[i]=='(') st.push(s[i]);
			else if(s[i]==')' && st.top()=='(') st.pop();
		}	else {
			if(s[i]==')') {
				cnt++;
				st.push('(');
			}	else st.push(s[i]);
		}
	}
	cout << cnt+(st.size()/2) << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}