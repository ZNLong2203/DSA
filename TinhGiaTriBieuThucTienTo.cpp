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

string cal(string xet1, string xet2, char c) {
	if(c=='+') return to_string(stoll(xet1)+stoll(xet2));
	else if(c=='-') return to_string(stoll(xet1)-stoll(xet2));
	else if(c=='*') return to_string(stoll(xet1)*stoll(xet2));
	else if(c=='/') return to_string(stoll(xet1)/stoll(xet2));
}

void solve() {
	string s;
	cin >> s;
	stack<string> st;
	for(int i=s.size()-1;i>=0;i--) {
		if(check(s[i])) {
			string xet1 = st.top(); st.pop();
			string xet2 = st.top(); st.pop();
			st.push(cal(xet1,xet2,s[i])); 
		}	else st.push(string(1,s[i]));
	}
	cout << st.top() << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}