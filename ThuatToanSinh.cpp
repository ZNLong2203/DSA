#include<bits/stdc++.h>
#define ll long long
using namespace std;

void khoitao(ll n,string &s) {
	for(int i=0;i<n;i++) s+='0';
}

void sinh(ll n,string &s) {
	int ok = 1;
	while(ok) {
		string xet = s;
		reverse(xet.begin(),xet.end());
		if(xet==s) {
			for(int j=0;j<s.size();j++) {
				cout << s[j] << " ";
			}
			cout << endl;
		}
		for(int i=n-1;i>=0;i--) {
			if(s[i]=='1') s[i]='0';
			else {
				s[i]='1';
				break;
			}
		}
		int cnt = 0;
		for(int i=0;i<n;i++) {
			if(s[i]=='0') break;
			else cnt++;
		}
		if(cnt==n) {
			for(int j=0;j<s.size();j++) {
				cout << s[j] << " ";
			}
			cout << endl;
			ok = 0;
		}
	}
}

int main() {
	ll n;
	cin >> n;
	string s = "";
	khoitao(n,s);
	sinh(n,s);
}