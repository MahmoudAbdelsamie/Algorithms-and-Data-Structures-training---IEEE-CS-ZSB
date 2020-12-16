// Problem Link : https://codeforces.com/problemset/problem/368/B
//  Time complexity : O(n+m)
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

int main()
{
    Mahmoud_Abdelsamie
    int n,m,l;
    cin>>n>>m;
    si s;
    int a[n+10],b[n+10];
    lp(i,1,(n+1))
        cin>>a[i];
    rlp(i,n){
        s.insert(a[i]);
        b[i]=s.size();
    }
    lp(i,0,m){
        cin>>l;
        cout<<b[l]<<endl;
    }
    return 0;
}
