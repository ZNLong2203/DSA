#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s; cin >> s;
	string res;
	deque<string> dq;
	for(int i=0;i<s.size();i++) {
		if(dq.size()==0) dq.push_back(string(1,s[i]));
		else {
			if(s[i]==')') {
				res = "1";
				ll ok = 0;
				while(dq.back()!="(") {
					res+=dq.back();
					dq.pop_back();
					if(dq.size()==0) {
						ok = 1;
						break;
					}
				}
				if(ok) res = res.substr(1,res.size()-1);
				if(dq.size()!=0) dq.pop_back();
				if(ok==0) res+="0";
				else if(ok) res = "1-" + res;
				dq.push_back(res);
			}	else dq.push_back(string(1,s[i]));
		}
	}
	res = "";
	string xet = "";
	while(dq.size()!=0) {
		if(dq.front()=="(" || dq.front()==")") {
			res+="-1";
			reverse(xet.begin(),xet.end());
			res+=xet;
			xet = "";
		}
		else xet+=dq.front();
		dq.pop_front();
	}
	reverse(xet.begin(),xet.end());
	res+=xet;
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}