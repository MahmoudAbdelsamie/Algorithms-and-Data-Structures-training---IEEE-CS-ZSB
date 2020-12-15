// Problem Link : https://codeforces.com/problemset/problem/520/A
#include <bits/stdc++.h>

#define lp(i,a,n) for(int i=a;i<(int)n;++i)
#define vi vector <int>
#define sc set <char>
#define vb vector <bool>
#define si(n) scanf("%d",&n)
#define pi(n) printf("%d\n",n)
#define mahmoud_abdelsamie ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

using namespace std;
bool c[26];
int main()
{
    mahmoud_abdelsamie;
    int n;
    cin >> n;
    string s;
    cin >> s;
    lp(i,0,s.length())
    {
        if(s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
    }
    lp(i,0,s.length())
        c[s[i]-97] = true;
    int cnt = 0;
    lp(i,0,26)
    {
        if(c[i])
            ++cnt;
    }
    if(cnt == 26)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
// Complexity : O(n)