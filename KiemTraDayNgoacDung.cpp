#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s; cin >> s;
	stack<char> st;
	for(int i=0;i<s.size();i++) {
		if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
		else if(st.size()==0) st.push(s[i]);
		else {
			if(s[i]==')' && st.top()=='(') st.pop();
			if(s[i]==']' && st.top()=='[') st.pop();
			if(s[i]=='}' && st.top()=='{') st.pop();
		}
	}
	if(st.size()==0) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}