#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(char c) {
	string s = "+-*/";
	for(int i=0;i<s.size();i++) {
		if(s[i]==c) return 1;
	}
	return 0;
}

void solve() {
	stack<string> st;
	string s; cin >> s;
	for(int i=s.size()-1;i>=0;i--) {
		if(check(s[i])) {
			string xet = st.top(); st.pop();
			xet = xet + st.top() + s[i]; st.pop();
			st.push(xet);
		}	else st.push(string(1,s[i]));
	}
	cout << st.top() << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}