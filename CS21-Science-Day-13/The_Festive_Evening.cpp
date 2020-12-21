// Problem Link : https://codeforces.com/problemset/problem/834/B
// time complexity : O(n)
#include <bits/stdc++.h>

#define lp(i,a,n) for(ll i=a;i<(ll)n;++i)
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
    int n, k; cin >> n >> k;
	int s[27], e[27];
	char a[n+5];
	 
	clr (s, -1);
	cin >> a;
	lp(i,0,n) {
		e[a[i]-'A'] = i;
		if (s[a[i]-'A'] == -1){ s[a[i]-'A'] = i;}
	}
	int c = 0;
	lp(i,0,n){
		c += (s[a[i]-'A'] == i);
		if (c > k) {
		  cout << "YES" << ln;
		  return 0;
		}
		c -= (e[a[i]-'A'] == i);
	}
	 
	cout << "NO" << ln;
    return 0;
}
