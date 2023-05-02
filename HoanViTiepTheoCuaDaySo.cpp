#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, cnt = 0; cin >> n;
	string s1,s2;
	cin >> s1;
	s2=s1;
	for(int i=1;i<s1.size();i++) {
		if(s1[i]<=s1[i-1]) cnt++;
	}
	if(cnt==s1.size()-1) {
		cout << n << " " << "BIGGEST\n";
		return; 
	}
	next_permutation(s1.begin(),s1.end());
	cout << n << " " << s1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}