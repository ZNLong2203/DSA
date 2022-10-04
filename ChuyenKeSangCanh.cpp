#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int n ; cin >> n; cin.ignore();
    vector<pair<ll,ll>> v;
    for(int i = 1 ; i <= n ;i++) {
        string s; getline(cin , s);
        stringstream ss(s);
        string xet;
        while(ss >> xet) {
            if(stoll(xet) > i) v.push_back(make_pair(i,stoll(xet)));
        }
    }
    for(pair<ll,ll> x : v) cout << x.first << " " << x.second << endl;
}