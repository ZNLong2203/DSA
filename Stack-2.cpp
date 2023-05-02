#include<bits/stdc++.h>
#define ll long long
using namespace std;

//bool check(char c) {
//	string s = "+-/*";
//	for(int i=0;i<s.size();i++) {
//		if(s[i]==c) return 1;
//	}
//	return 0;
//}

void solve() {
	string s; cin >> s;
	stack<char> st;
	for(int i=0;i<s.size();i++) {
		if(st.size()==0) st.push(s[i]);
		else if (s[i]=='(') st.push(s[i]);
		else {
			ll ok = 0;
			if(s[i]==')') {
				while(st.top()!='(') {
					if(st.top()!='(' && st.top()!=')') ok = 1;
					st.pop();
				}
				st.pop();
				if(!ok) {
					cout << "Yes\n";
					return;
				}
			}	else st.push(s[i]);
		}
	}
	cout << "No\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}