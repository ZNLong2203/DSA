#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
char a[100]={0};

void in() {
	for(int i=1;i<=n;i++) cout << a[i];	
	cout << " ";
}

void solve(int i) {
	for(int j=0;j<=1;j++) {
		if(j==0) a[i] = 'A';
		else a[i] = 'B';
		
		if(i==n) in();
		else solve(i+1);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		solve(1);
		cout << endl;
	}
}