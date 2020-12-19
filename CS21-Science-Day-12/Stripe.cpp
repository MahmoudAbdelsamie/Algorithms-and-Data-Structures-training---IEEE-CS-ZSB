// Problem Link : https://codeforces.com/contest/18/problem/C
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
    long long n , x=0;
	cin >> n ;
	long long arr[n] = {}, per[n] = {};
	lp(i,0,n)
		cin >> arr[i];
	per[0] = arr[0];
	lp(i,1,n)
		per[i] = arr[i] + per[i-1];
	lp(i,0,(n-1))
		x += (per[i] == per[n-1]-per[i]);
    cout << x << ln;
    return 0;
}