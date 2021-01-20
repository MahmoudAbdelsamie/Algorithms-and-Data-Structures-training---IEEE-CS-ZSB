// Problem Link : https://codeforces.com/problemset/problem/579/A 
#include <bits/stdc++.h>
using namespace std;
#define Mahmoud_Abdelsamie          ios_base::sync_with_stdio(0);cin.tie(0);
int main()
{
    Mahmoud_Abdelsamie
    int t{},co{};
    cin>>t;
    while(t>0){
        co += (t%2==1);
        t/=2;
    }
    cout<<co;
}