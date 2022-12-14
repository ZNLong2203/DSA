#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, k;
vector<ll> a;
void init () {
    cin >> n >> k;
    a.resize(k + 1);
    for (int i = 1; i <= k; i++) a[i] = i;
}
void output () {
    for (int i = 1; i <= k; i++) cout << char(a[i] - 1 + 'A');
    cout << endl;
}
void backtracking (int pos) {
    for (int i = a[pos - 1] + 1; i <= n - k + pos; i++) {
        a[pos] = i;
        if (pos == k) output();
        else backtracking(pos + 1);
    }
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        init();
        backtracking(1);
        a.clear();
    }
    return 0;
}