#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	do {
		cout << s << " ";
	}	while(next_permutation(s.begin(),s.end()));
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}