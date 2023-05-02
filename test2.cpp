#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)
#define MAX 1000000

int bfs(int n) {
    queue<pair<int,int>> q;

    q.push({n, 0});
    unordered_map<int, int> m;
    while (!q.empty()) {
        pair<int, int> c = q.front(); q.pop();

        if (c.first == 0) {
            return c.second;
        }

        if (c.first > 1 && !m[c.first - 1]) {
            q.push({c.first - 1, c.second + 1});
            m[c.first - 1]++;
        }
        if (!m[c.first - 1]) {
            q.push({c.first - 1, c.second + 1});
            m[c.first - 1]++;
        }
        if (!m[c.first * -1]) {
            q.push({c.first * -1, c.second + 1});
            m[c.first * -1]++;
        }
        if (c.first % 2 == 0 && !m[c.first / 2]) {
            q.push({c.first / 2, c.second + 1});
            m[c.first / 2]++;
        }
        if ((int)sqrt(c.first) * (int)sqrt(c.first) == c.first && !m[(int)sqrt(c.first)]) {
            q.push({(int)sqrt(c.first), c.second + 1});
        }
    }
}

int n;
void run_test_case() {
    cin >> n;
    cout << bfs(n) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}