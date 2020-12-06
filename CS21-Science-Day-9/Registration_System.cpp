// Problem link : https://codeforces.com/contest/4/problem/C
#include <bits/stdc++.h>


#define lp(i,a,n) for(int i=a;i<(int)n;++i)
#define rep(i,a,n) for(int i=a;i<=n;++i)
#define rlp(i,n) for(int i=n-1;i>=0;--i)
#define all(v) v.begin(),v.end()
#define clr(n,a) memset(n,a,sizeof(n))
#define vi vector <int>
#define sc set <char>
#define si set<int>
#define pb push_back
#define PB pop_back
#define vb vector <bool>
#define pi(n) printf("%d\n",n)
#define ln "\n"
#define Mahmoud_Abdelsamie ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    Mahmoud_Abdelsamie
    int n; cin>>n;
    map<string,int> mp;
    while(n--){
		string s; cin>>s;
		if(mp[s])
			cout << s << mp[s] << ln;
		else
			cout << "OK" << ln;
		++mp[s];
	}
    return 0;
}
// Time Complexity : O(log n)
