#include <bits/stdc++.h>
using namespace std;
int n;
int a[10000];
int b[10000];
int check;
set<string> s;

void init() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = 0;
	}
	s.clear();
}


void sinh() {
	int i = n;
	while (i >= 1 && b[i] == 1) {
		b[i] = 0;
		i--;
	}
	if (i == 0) {
		check = 0;
	} else {
		b[i] = 1;
	}
}

int ktra(int n) {
	if (n < 2) {
		return 0;
	}	
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void solve() {
	check = 1;
	while (check == 1) {
		sinh();
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			if (b[i] == 1) {
				sum = sum + a[i];
			}
		}
		vector<int> v;
		string c;
		if (ktra(sum) == 1) {
			for (int i = 1; i <= n; i++) {
				if (b[i] == 1) {
					v.push_back(a[i]);
				}
			}
			sort(v.begin(), v.end(),greater<int>());
			for (int i = 0; i < v.size() - 1; i++) {
				c = c + to_string(v[i]) + " ";
			}
			c = c + to_string(v[v.size() - 1]);
		}
		s.insert(c); 
	}
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		init();
		solve();
		vector<string> vs;
		for (auto x : s) {
			vs.push_back(x);
		}
		for (int i = 1; i < vs.size(); i++) {
			cout << vs[i] << endl;
		}
	}
}