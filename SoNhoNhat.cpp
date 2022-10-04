#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll s,d,cnt = 0;
	cin >> s >> d;
	string kq = "";
	s--;
	if(s>d*9) {
        cout << "-1\n";
        return;
    }
	for(int i=9;i>=1;i--) {
		while(s-i>=0 && cnt-1<d) {
			kq+=to_string(i);
			cnt++;
			s-=i;
		}
	}
	while(cnt<d) {
		kq+='0';
		cnt++;
	}
	if(cnt+1==d) kq+='1';
	else kq[kq.size()-1]++;
	reverse(kq.begin(),kq.end());
	cout << kq << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) solve();
}