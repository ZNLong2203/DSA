#include<bits/stdc++.h>
#define ll long long
using namespace std;

queue<ll> q;
void solve() {
	string s;
	cin >> s;
	if(s=="PUSH") {
		ll x; cin >> x;
		q.push(x);
	}	else if(s=="POP") {
		if(q.size()!=0) q.pop();
	}	else if(s=="PRINTFRONT") {
		if(q.size()!=0) cout << q.front() << endl;
		else cout << "NONE\n";
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}