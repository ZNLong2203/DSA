#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string x,y;
	cin >> x >> y;
	for(int i=0;i<x.size();i++) {
		if(x[i]=='6') x[i]='5';
	}
	for(int i=0;i<y.size();i++) {
		if(y[i]=='6') y[i]='5';
	}
	cout << stoll(x)+stoll(y) << " ";
	
	for(int i=0;i<x.size();i++) {
		if(x[i]=='5') x[i]='6';
	}
	for(int i=0;i<y.size();i++) {
		if(y[i]=='5') y[i]='6';
	}
	cout << stoll(x)+stoll(y) << " ";
	cout << endl;
}

int main() {
	solve();
}