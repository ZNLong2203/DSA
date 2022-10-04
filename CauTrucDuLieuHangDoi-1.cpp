#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,a; cin >> n;
	queue<ll> q;
	while(n--) {
		ll x; cin >> x;
		switch(x) {
			case 1:
				cout << q.size() << endl;
				break;
			case 2:
				if(q.size()==0) cout << "YES\n";
				else cout << "NO\n";
				break;
			case 3:
				cin >> a;
				q.push(a);
				break;
			case 4:
				if(q.size()!=0) q.pop();
				break;
			case 5:
				if(q.size()!=0) cout << q.front() << endl;
				else cout << "-1\n";
				break;
			case 6:
				if(q.size()!=0) cout << q.back() << endl;
				else cout << "-1\n";
				break;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}