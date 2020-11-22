// Problem link : http://codeforces.com/contest/382/problem/A
#include<bits/stdc++.h>
#include <iostream>
#include<set>
#include<algorithm>
using namespace std;

typedef long long ll;

#define sc set<char>
#define lp(i,a,n) for(int i=a;i<n;++i)
#define rep(i,a,n) for(int i=a;i<=n;++i)
#define ln "\n"
#define mahmoud_abdelsamie ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	mahmoud_abdelsamie
	string s1, s2;
	cin >> s1 >> s2;
	string x, y;
	int t = s2.size(), idx;
	bool flag = 0;
	lp(i,0,s1.size())
	{
		if (s1[i] == '|') {
			flag = 1;
			idx = i;
			continue;
		}
		!flag ? x += s1[i] : y += s1[i];
	}
	lp(i,0,t)
	{
		if (x.size() > y.size()) {
			y += s2[i];
		} else {
			x += s2[i];
		}
	}
	if (x.size() == y.size()) {
		cout << x << s1[idx] << y;
	} else
		cout << "Impossible";
	return 0;
}
