// Problem Link : http://codeforces.com/contest/770/problem/A
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <set>
#include <algorithm>
#include <math.h>
#define lp(i,a,n) for(int i=a;i<n;i++)
#define vi vector <int>
#define sc set <char>

#define mahmoud_abdelsamie ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

using namespace std;

int main()
{
    mahmoud_abdelsamie;
    int n,k;
    string s;
    cin >> n >> k;
    for(int i=97;i<(k+97);++i)
        s += char(i);
    int tmp = 0;
    for(int i=s.length();i<n;++i,++tmp)
        s += s[tmp];
    cout << s << "\n";
    return 0;
}
