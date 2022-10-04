#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n;
	cin >> n;
	string s = "";
	stack<ll> st;
	while(n--) {
		cin >> s;
		if(s=="PUSH") {
			ll x; cin >> x;
			st.push(x);
		}	else if(s=="POP") {
			if(st.size()!=0) st.pop();
		}	else if(s=="PRINT") {
			if(st.size()!=0) cout << st.top() << endl;
			else cout << "NONE\n";
		}
	}
}

int main() {
	solve();
}