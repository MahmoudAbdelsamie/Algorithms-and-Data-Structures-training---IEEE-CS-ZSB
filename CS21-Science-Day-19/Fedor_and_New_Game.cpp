// Problem Link : https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
#define ln "\n"
#define Mahmoud_Abdelsamie       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int solve(int x){
    int sum=0,z=2097152;
    if(x>1){
        while(x>0){
            if(x>=z){
                sum++;
                x-=z;
                }
            z/=2;
        }
        return sum;
    }
    else
        return 0;
}
int main()
{
    Mahmoud_Abdelsamie
    ll n,m,k;
    cin>>n>>m>>k;
    int arr[m+1];
    for(int i=0;i<=m;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int j=0;j<m;j++){
        if(m==j) continue;
        int x= arr[m]^arr[j];
        int y = solve(x);
        ans += (y<=k);
    }
 
    cout<<ans<<endl;
    return 0;
}