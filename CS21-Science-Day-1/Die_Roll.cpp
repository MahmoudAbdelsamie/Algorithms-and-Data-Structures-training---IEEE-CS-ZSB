// Probelm Link : http://codeforces.com/contest/9/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string dot[6] = {"1/6","1/3","1/2","2/3","5/6","1/1"};
    int x,y; cin>>x>>y;
    int m = max(x,y);
    cout<<dot[6-m]<<endl;
    return 0;
}
