#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll cnt = 0, res = 0;
	string s; cin >> s;
	stack<char> st;
	for(int i=0;i<s.size();i++) {
		if(st.size()==0) {
			st.push(s[i]);
			cnt = 0;	
		} else if(s[i]==']' && st.top()=='[') {
			cnt+=2;
			st.pop();
		} else if(s[i]=='[' && st.top()==']') {
			res+=st.size()+cnt;
			st.pop();
		} else if(s[i]==']' && st.top()==']') st.push(s[i]);
		  else if(s[i]=='[') st.push(s[i]);
	}
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}