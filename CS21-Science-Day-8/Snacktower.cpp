// Problem Link : https://codeforces.com/contest/767/problem/A
#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <set>
#include <algorithm>
#include <math.h>
#include <vector>
#include <iterator>
#include<deque>
#include<cstdio>

#define lp(i,a,n) for(int i=a;i<n;++i)
#define rep(i,a,n) for(int i=a;i<=n;++i)
#define rlp(i,n) for(int i=n-1;i>=0;--i)
#define all(v) v.begin(),v.end()
#define clr(n,a) memset(n,a,sizeof(n))
#define vi vector <int>
#define sc set <char>
#define si set<int>
#define pb push_back
#define vb vector <bool>
#define pi(n) printf("%d\n",n)
#define ln "\n"
#define mahmoud_abdelsamie ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    mahmoud_abdelsamie
    int n; cin>>n;
    int tmp=n;
    ll a[n+1];
    bool visited[n+1] = {};
    rep(i,1,n)
        cin>>a[i];
    rep(i,1,n){
        visited[a[i]] = true;
        while(visited[tmp]&&tmp>0)
            cout<<tmp--<<" ";
        cout<<ln;
    }
    return 0;
}
// Complexity : O(n^2)
