#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
vector<int> a;
vector<vector<int>> ans;

void init() {
	cin >> n;
	a.resize(n);
	for(auto &i:a)	cin >> i;
}

void selectionSort() {
	for(int i = 0; i < n - 1; i++) {
		int pos = i;
		for(int j = i + 1; j < n; j++) 
			if(a[j] < a[pos]) pos = j;
		swap(a[i], a[pos]);
		ans.push_back(a);
	}
	for(int i = ans.size() - 1; i >= 0; i--) {
        cout << "Buoc " << i + 1 << ":";
        for(auto j : ans[i])   cout << " " << j;
        cout << endl;
    }
	a.clear();
    ans.clear();
}
int main () {
    init();
    selectionSort();
    return 0;
}