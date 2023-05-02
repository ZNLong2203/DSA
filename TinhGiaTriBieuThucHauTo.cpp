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

string cal(string a, string b, char x) {
	if(x=='+') return to_string(stoll(a) + stoll(b));
	else if(x=='-') return to_string(stoll(a) - stoll(b));
	else if(x=='*') return to_string(stoll(a) * stoll(b));
	else if(x=='/') return to_string(stoll(a) / stoll(b));
}

void solve() {
	string s; cin >> s;
	stack<string> st;
	for(int i=0;i<s.size();i++) {
		if(check(s[i])) {
			string xet1 = st.top(); st.pop();
			string xet2 = st.top(); st.pop();
			st.push(cal(xet2,xet1,s[i]));
		}	else st.push(string(1,s[i]));
	}
	cout << st.top() << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}