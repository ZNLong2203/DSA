#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s; cin >> s;
	stack<string> st;
	for(int i=0;i<s.size();i++) {
		if(isalpha(s[i])) st.push(string(1,s[i]));
		else {
			string xet = st.top();
			st.pop();
			xet = st.top() + s[i] + xet;
			st.pop(); 
			st.push(xet);
		}
	}
	cout << st.top() << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}