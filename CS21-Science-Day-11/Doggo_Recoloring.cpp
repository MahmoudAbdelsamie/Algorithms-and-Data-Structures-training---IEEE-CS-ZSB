// Problem Link : https://codeforces.com/contest/1025/problem/A
//  Time complexity : O(n)
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
    int n,i;
    string str;
    cin >> n >> str;
    if (n == 1){
        cout << "Yes" << ln;
        return 0;
    }
    else
    {
        map <char,int> mp;
        for (i=0; str[i]; ++i)
           ++mp[str[i]];
        map <char,int>::iterator it;

        for (it=mp.begin(); it!=mp.end(); ++it)
        {
            if (it->second >= 2)
            {
                cout << "Yes" << ln;
                return 0;
            }
        }
        cout << "No" << ln;

    }
    return 0;
}
