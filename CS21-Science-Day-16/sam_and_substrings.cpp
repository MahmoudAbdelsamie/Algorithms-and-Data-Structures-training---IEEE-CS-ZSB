// Problem Link : https://www.hackerrank.com/challenges/sam-and-substrings/problem
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int rem = 1000000007;
ll substrings(string n) {
    ll sz = n.size();
    vector<ll> a(sz),b(sz);
    a[0] = b[0] = 1;
    for(ll i = 1;i<sz;i++)
    {
        a[i] = (a[i-1]*10) % rem;
        b[i] = (b[i-1]+a[i]) % rem;
    }

    ll ans=0;

    for(ll i = 0;i<sz;i++)
    {
        ans+=((n[i]-'0')*b[sz-i-1]*(i+1))%rem;
        ans%=rem;
    }

    return ans;
}
