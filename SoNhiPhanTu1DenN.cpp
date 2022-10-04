#include<bits/stdc++.h>
#define ll long long
using namespace std;

string solve(ll n) {
	string s = "";
	while(n!=0) {
		s+=to_string(n&1);
		n>>=1;	
	}
	reverse(s.begin(),s.end());
	return s;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n; cin >> n;
		for(int i=1;i<=n;i++) {
			cout << solve(i) << " ";
		}	
		cout << endl;
	}
}