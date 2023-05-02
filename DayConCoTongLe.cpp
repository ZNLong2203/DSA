#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,check = 0; 
vector<ll> v(1000);
vector<string> res;
void Try(ll pos, ll sum, string s) {
	for(int i=pos;i<n;i++) {
		sum+=v[i];
		if(sum%2!=0) {
			check = 1;
//			if(s[s.size()-1]==' ') s.pop_back();
//			reverse(s.begin(),s.end());
			cout << sum << " " << s << endl;
			res.push_back(s+to_string(v[i])+' ');
		}
		if(check==0) Try(i+1,sum,s+to_string(v[i])+' ');
		else Try(i+1,sum,s);
		check = 0;
		sum-=v[i];
	}
}

void solve() {
	cin >> n;
	v.clear();
	res.clear();
	for(int i=0;i<n;i++) cin >> v[i];
	sort(v.begin(),v.end());
	string s = "";
	Try(0,0,s);
//	sort(res.begin(),res.end());
	for(auto x:res) cout << x << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}