// Problem Link : https://codeforces.com/problemset/problem/433/B
//  Time complexity : O(n*log(n)+m)
#include <bits/stdc++.h>


#define lp(i,a,n) for(int i=a;i<(int)n;++i)
#define rep(i,a,n) for(int i=a;i<=n;++i)
#define rlp(i,n) for(int i=n;i>=1;--i)
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
ll a[100005],b[100005];
int main()
{
    Mahmoud_Abdelsamie
    int n,i,m,t,l,r;

    while (cin >> n)
    {
        a[0] = b[0] = 0;

        rep(i,1,n)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        rep(i,2,n)
            a[i] += a[i-1];

        sort (b,b+n+1);

        rep(i,2,n)
            b[i] += b[i-1];

        cin >> m;

        rep(i,1,m)
        {
            cin >> t >> l >> r;
            cout << (t == 1 ? a[r]-a[l-1] : b[r]-b[l-1]) << ln;
        }
    }
    return 0;
}
