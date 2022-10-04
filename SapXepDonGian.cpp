#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, s = 0;
    cin >> n;
    vector<ll> a(n + 5), f(n + 5, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        f[a[i]] = f[a[i] - 1] + 1;
        s = max(s, f[a[i]]);
    }
    cout << n - s;
}