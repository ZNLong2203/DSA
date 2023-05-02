#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll check(char c) {
	string s = "*+-/";
	for(int i=0;i<s.size();i++) {
		if(s[i]==c) return 1;
	}
	return 0;
}

void solve() {
	string s;
	cin >> s;
	stack<string> st;
	for(int i=s.size()-1;i>=0;i--) {
		if(check(s[i])) {
			string tmp = st.top(); st.pop();
			tmp = "(" + tmp + s[i] + st.top() + ")";
			st.pop();
			st.push(tmp);
		}	else st.push(string(1,s[i]));
	}
	cout << st.top() << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}