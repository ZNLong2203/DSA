#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n], ans = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 1; i < n; i++) {
			if (a[i] < a[i - 1]) {
				ans = i;
				break;
			}
		}
		cout << ans << endl;
	}
}