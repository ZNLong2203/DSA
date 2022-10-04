#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	stack<ll> st;
	string s;
	ll x;
	while(cin >> s) {
		if(s=="push") {
			cin >> x;
			st.push(x);
		}	else if(s=="pop") {
			st.pop();
		}	else if(s=="show") {
			stack<ll> tmp;
			if(st.size()!=0) {
				while(st.size()!=0) {
					tmp.push(st.top());
					st.pop();
				}
				while(tmp.size()!=0) {
					st.push(tmp.top());
					cout << tmp.top() << " ";
					tmp.pop();
				}
				cout << endl;
			}	else cout << "empty\n";
		}
	}
}

int main() {
	solve();
}