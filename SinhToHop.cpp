#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n,k;
int a[100]={0};

void init() {
	for(int i=1;i<=k;i++) a[i] = i;	
}

void Try(int i) {
	for(int j=a[i-1]+1; j<=n-k+i; j++) {
		a[i] = j;
		if(i==k) {
			for(int s=1;s<=k;s++) {
				cout << a[s];
			}
			cout << " ";
		}	else Try(i+1);
	}	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		init();
		Try(1);
		cout << endl;
	}
}