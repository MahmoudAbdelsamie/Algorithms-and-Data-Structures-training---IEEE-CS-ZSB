// Problem Link : https://codeforces.com/contest/1204/problem/A
#include <bits/stdc++.h>

#define rep(i, v) for(int i=0;i<v.size();++i)
#define Mahmoud_Abdelsamie ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Mahmoud_Abdelsamie
	string str;

	while (cin >> str) {
		int last1 = -1, cnt1s = 0;

		rep(i, str)
		{
			if (str[i] == '1')
			{
				if (last1 == -1)
					last1 = i;
				++cnt1s;
			}
		}

		if (cnt1s == 0)
		{
			cout<<0<<"\n";
			continue;
		}
		last1 = str.size() - last1 - 1;

		if (last1 % 2 == 1)
			last1++, cnt1s = 0;

		last1 = last1 / 2;

		last1 += (cnt1s > 1);
		cout<<last1<<"\n";
		break;
	}

	return 0;
}
