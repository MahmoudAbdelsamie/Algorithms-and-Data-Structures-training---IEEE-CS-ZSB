// Problem Link : https://codeforces.com/contest/816/problem/B
// Time Complexity : O(n+MAX+q)
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
const int MAX = 2e5+10;
int arr[MAX] = {0} , arr2[MAX] = {0};
int main()
{
	Mahmoud_Abdelsamie
    int n , k , q , a , b ;
    cin >> n >> k >> q;
    lp(i,0,n){
        cin >> a >> b;
        ++arr[a] , ++arr2[b];
    }
    arr[0] = 0 , arr2[MAX-1] = 0;
    lp(i,1,MAX){
        arr[i] = arr[i-1] + arr[i];
    }
    for(int i = MAX-2 ;i >= 1 ;--i){
        arr2[i] = arr2[i+1] + arr2[i];
    }
    int csum[MAX];
    csum[0] = 0;
    for(int i = 1 ;i < MAX ;++i){
        csum[i] = csum[i-1] + (n-((n-arr[i])+(n-arr2[i])) >= k);
    }
    while(q--){
        cin >> a >> b;
        cout << (csum[b]-csum[a-1]) << ln;
    }
    return 0;
}
