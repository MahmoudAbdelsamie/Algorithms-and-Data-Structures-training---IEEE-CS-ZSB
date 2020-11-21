#include <bits/stdc++.h>

#define vi vector<int>
#define ln "\n"
#define mahmoud_abdelsamie ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

vi array_left_rotation(vi a, int n, int k) {
    k %= n;
    vi v(n);
    for(int i = 0;i<n;++i) {
        v[(n+i-k)%n] = a[i];
    }
    return v;
}

int main(){
    mahmoud_abdelsamie
    int n,k;
    cin >> n >> k;
    vi a(n);
    for(int i = 0;i<n;++i){
        cin >> a[i];
    }
    vi sample = array_left_rotation(a, n, k);
    for(int i = 0;i<n;++i)
        cout << sample[i] << " ";
    cout << ln;
    return 0;
}

