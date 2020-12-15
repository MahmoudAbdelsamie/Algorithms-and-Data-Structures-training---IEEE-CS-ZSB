// Problem Link : https://codeforces.com/problemset/problem/141/A
#include <bits/stdc++.h>

#define lp(i,a,n) for(int i=a;i<n;++i)
#define vi vector <int>
#define sc set <char>
#define vb vector <bool>
#define si(n) scanf("%d",&n)
#define pi(n) printf("%d\n",n)
#define ln "\n"
#define mahmoud_abdelsamie ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

using namespace std;
bool c[26];
int main()
{
    mahmoud_abdelsamie;
    string str1,str2,str3;
    cin >> str1 >> str2 >> str3;
    string str4 = str1+str2;
    sort(str4.begin(),str4.end());
    sort(str3.begin(),str3.end());
    cout << (str3==str4 ? "YES" : "NO") << ln;
    return 0;
}
// Complexity : O(N log(N))
