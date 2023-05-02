#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,s,p;
vector<string> kq;
const int maxn = (int)500;
int prime[maxn+1];

void snt() {
	for(int i=0;i<=maxn;i++) {
		prime[i]=1;
	}	
	prime[0]=prime[1]=0;
	for(int i=2;i<=sqrt(maxn);i++) {
		if(prime[i]) {
			for(int j=i*i;j<=maxn;j+=i) prime[j]=0;
		}
	}
}

void Try(ll pos, ll sum, ll cnt, string a) {
	for(int i=pos;i<=s;i++) {
		if(sum>s || cnt > n) return;
		if(prime[i]) {
			cnt++;
			sum+=i;
			if(sum==s && cnt==n) {
				a+=to_string(i);
				kq.push_back(a);
				return;
			}
			Try(i+1,sum,cnt,a+to_string(i)+" ");
			cnt--;
			sum-=i;	
		}
	}
}

void solve() {
	kq.clear();
	cin >> n >> p >> s;
	string a="";
	Try(p+1,0,0,a);
	sort(kq.begin(),kq.end());
	cout << kq.size() << endl;
	for(auto x:kq) {
		cout << x << endl;
	}
}

int main() {
	snt();
	int t;
	cin >> t;
	while(t--) solve();
}