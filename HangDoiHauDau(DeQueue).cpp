#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll x;
deque<ll> q;
void solve() {
	string s;
	cin >> s;
	if(s=="PUSHBACK") {
		cin >> x;
		q.push_back(x);
	}	else if(s=="PUSHFRONT") {
		cin >> x;
		q.push_front(x);
	}	else if(s=="POPBACK") {
		if(q.size()!=0) q.pop_back();
	}	else if(s=="POPFRONT") {
		if(q.size()!=0) q.pop_front();
	}	else if(s=="PRINTFRONT") {
		if(q.size()!=0) cout << q.front() << endl;
		else cout << "NONE\n";
	}	else if(s=="PRINTBACK") {
		if(q.size()!=0) cout << q.back() << endl;
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