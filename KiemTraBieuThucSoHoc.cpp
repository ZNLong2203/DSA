#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	stack<char> st;
	for(int i=0;i<s.size();i++) {
		if(s[i]=='(') st.push('(');
		if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/') st.push(s[i]);
		if(s[i]==')') {
			if(st.top()=='(') {
				cout << "Yes\n";
				return;
			}
			while(st.size()!=0 && st.top()!='(') {
				st.pop();
			}	
			st.pop();
		}
	}
	cout << "No\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}